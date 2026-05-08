// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
// SPDX-License-Identifier: GPL-3.0-or-later
#ifndef MEDIAWIDGET_H
#define MEDIAWIDGET_H
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QDBusConnectionInterface>
class DBusMediaPlayer2;
class MediaWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MediaWidget(QWidget *parent = nullptr);
    void initMediaPlayer();
private slots:
    void onMetadataChanged();
    void onPlaybackStatusChanged();
    void onServiceChanged(const QString &name, const QString &oldOwner, const QString &newOwner);
private:
    void initUI();
    void connectToPlayer(const QString &service);
    void updateTitle();
    QLabel           *m_titleLabel;
    QPushButton      *m_prevBtn;
    QPushButton      *m_playPauseBtn;
    QPushButton      *m_nextBtn;
    DBusMediaPlayer2 *m_player;
    bool              m_isPlaying;
    QString           m_currentService;
    bool              m_uiReady;
};
#endif
