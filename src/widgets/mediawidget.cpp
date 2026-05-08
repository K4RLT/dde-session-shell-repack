// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
// SPDX-License-Identifier: GPL-3.0-or-later
#include "mediawidget.h"
#include "dbusmediaplayer2.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDBusInterface>
#include <QDBusPendingCall>
#include <QDBusPendingCallWatcher>
#include <QDBusReply>
#include <QFontMetrics>

static const char *BTN_STYLE = R"(
QPushButton {
    background: rgba(255,255,255,0.15);
    border: none;
    border-radius: 4px;
    color: white;
    font-size: 15px;
    padding: 4px 10px;
    min-width: 34px;
    min-height: 28px;
}
QPushButton:hover  { background: rgba(255,255,255,0.28); }
QPushButton:pressed{ background: rgba(255,255,255,0.10); }
)";

static const char *LABEL_STYLE = R"(
QLabel {
    color: rgba(255,255,255,0.85);
    font-size: 12px;
    background: transparent;
}
)";

MediaWidget::MediaWidget(QWidget *parent)
    : QWidget(parent)
    , m_titleLabel(nullptr)
    , m_prevBtn(nullptr)
    , m_playPauseBtn(nullptr)
    , m_nextBtn(nullptr)
    , m_player(nullptr)
    , m_isPlaying(false)
    , m_uiReady(false)
{
    hide();
}

void MediaWidget::initUI()
{
    if (m_uiReady) return;
    m_uiReady = true;

    m_titleLabel = new QLabel(this);
    m_titleLabel->setStyleSheet(QLatin1String(LABEL_STYLE));
    m_titleLabel->setAlignment(Qt::AlignCenter);
    m_titleLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    m_titleLabel->setMaximumWidth(340);

    m_prevBtn      = new QPushButton("\u23ee", this);
    m_playPauseBtn = new QPushButton("\u23f8", this);
    m_nextBtn      = new QPushButton("\u23ed", this);

    for (auto *btn : {m_prevBtn, m_playPauseBtn, m_nextBtn}) {
        btn->setStyleSheet(QLatin1String(BTN_STYLE));
        btn->setFlat(true);
        btn->setCursor(Qt::PointingHandCursor);
    }

    auto *btnLayout = new QHBoxLayout;
    btnLayout->setContentsMargins(0, 0, 0, 0);
    btnLayout->setSpacing(2);
    btnLayout->addWidget(m_prevBtn);
    btnLayout->addWidget(m_playPauseBtn);
    btnLayout->addWidget(m_nextBtn);

    auto *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 8, 0, 4);
    mainLayout->setSpacing(4);
    mainLayout->addWidget(m_titleLabel, 0, Qt::AlignHCenter);
    mainLayout->addLayout(btnLayout);
    mainLayout->setAlignment(btnLayout, Qt::AlignHCenter);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

    connect(m_prevBtn,      &QPushButton::clicked, this, [this]{ if (m_player) m_player->Previous(); });
    connect(m_playPauseBtn, &QPushButton::clicked, this, [this]{ if (m_player) m_player->PlayPause(); });
    connect(m_nextBtn,      &QPushButton::clicked, this, [this]{ if (m_player) m_player->Next(); });
}

void MediaWidget::connectToPlayer(const QString &service)
{
    delete m_player;
    m_player = nullptr;
    m_currentService = service;
    m_player = new DBusMediaPlayer2(service, "/org/mpris/MediaPlayer2",
                                    QDBusConnection::sessionBus(), this);
    connect(m_player, &DBusMediaPlayer2::MetadataChanged,       this, &MediaWidget::onMetadataChanged);
    connect(m_player, &DBusMediaPlayer2::PlaybackStatusChanged,  this, &MediaWidget::onPlaybackStatusChanged);
    onMetadataChanged();
    onPlaybackStatusChanged();
    // Only show if actually playing or paused
    const QString status = m_player->playbackStatus();
    if (status == QLatin1String("Playing") || status == QLatin1String("Paused"))
        show();
    else
        hide();
}

void MediaWidget::onMetadataChanged() { updateTitle(); }

void MediaWidget::updateTitle()
{
    if (!m_player || !m_titleLabel) return;
    const auto meta = m_player->metadata();
    QString artist;
    const QVariant av = meta.value("xesam:artist");
    if (av.userType() == QMetaType::QStringList)
        artist = av.toStringList().join(", ");
    else
        artist = av.toString();
    const QString title = meta.value("xesam:title").toString();
    QString display;
    if (!artist.isEmpty() && !title.isEmpty())
        display = artist + " - " + title;
    else if (!title.isEmpty())
        display = title;
    else if (!artist.isEmpty())
        display = artist;
    else
        display = tr("Unknown");
    QFontMetrics fm(m_titleLabel->font());
    m_titleLabel->setText(fm.elidedText(display, Qt::ElideMiddle, 320));
}

void MediaWidget::onPlaybackStatusChanged()
{
    if (!m_player || !m_playPauseBtn) return;
    const QString status = m_player->playbackStatus();
    m_isPlaying = (status == QLatin1String("Playing"));
    m_playPauseBtn->setText(m_isPlaying ? "\u23f8" : "\u25b6");
    if (status == QLatin1String("Stopped") || status.isEmpty())
        hide();
    else
        show();
}

void MediaWidget::onServiceChanged(const QString &name, const QString &oldOwner, const QString &newOwner)
{
    Q_UNUSED(oldOwner)
    if (!name.startsWith(QLatin1String("org.mpris.MediaPlayer2."))) return;
    if (!newOwner.isEmpty() && !isVisible()) {
        initUI();
        connectToPlayer(name);
    } else if (name == m_currentService && newOwner.isEmpty()) {
        hide();
        delete m_player;
        m_player = nullptr;
        m_currentService.clear();
        initMediaPlayer();
    }
}

void MediaWidget::initMediaPlayer()
{
    QDBusInterface dbusInter("org.freedesktop.DBus", "/", "org.freedesktop.DBus",
                             QDBusConnection::sessionBus(), this);
    auto call    = dbusInter.asyncCall("ListNames");
    auto watcher = new QDBusPendingCallWatcher(call, this);
    connect(watcher, &QDBusPendingCallWatcher::finished, this, [=] {
        watcher->deleteLater();
        if (call.isError()) return;
        const QStringList services = QDBusReply<QStringList>(call.reply()).value();
        QString found;
        for (const QString &s : services)
            if (s.startsWith(QLatin1String("org.mpris.MediaPlayer2."))) { found = s; break; }
        if (!found.isEmpty()) {
            initUI();
            connectToPlayer(found);
        } else {
            auto *iface = QDBusConnection::sessionBus().interface();
            connect(iface, &QDBusConnectionInterface::serviceOwnerChanged,
                    this, &MediaWidget::onServiceChanged, Qt::UniqueConnection);
        }
    });
}
