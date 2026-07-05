// SPDX-FileCopyrightText: 2015 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "timewidget.h"

#include <QVBoxLayout>
#include <QDateTime>
#include <QFontDatabase>
#include <QGuiApplication>

const QStringList weekdayFormat = {"dddd", "ddd"};
const QStringList shortDateFormat = { "yyyy/M/d", "yyyy-M-d", "yyyy.M.d",
                                      "yyyy/MM/dd", "yyyy-MM-dd", "yyyy.MM.dd",
                                      "MM.dd.yyyy", "dd.MM.yyyy", "yy/M/d",
                                      "yy-M-d", "yy.M.d" };
const QStringList shortTimeFormat = { "h:mm", "hh:mm"};

/**
 * @brief resolveHeavyWeight 检测系统字体是否提供 Black/Heavy 字重，
 * 如果没有则依次降级到 ExtraBold、Bold，保证在任意系统字体下都有明显的"重"字重效果。
 */
static QFont::Weight resolveHeavyWeight(const QString &family)
{
    const QStringList styles = QFontDatabase::styles(family);
    for (const QString &style : styles) {
        if (style.contains(QStringLiteral("Black"), Qt::CaseInsensitive) ||
            style.contains(QStringLiteral("Heavy"), Qt::CaseInsensitive)) {
            return QFont::Black;
        }
    }
    for (const QString &style : styles) {
        if (style.contains(QStringLiteral("ExtraBold"), Qt::CaseInsensitive)) {
            return QFont::ExtraBold;
        }
    }
    return QFont::Bold;
}

TimeWidget::TimeWidget(QWidget *parent)
    : QWidget(parent)
    , m_timeLabel(nullptr)
    , m_dateLabel(nullptr)
    , m_refreshTimer(nullptr)
    , m_use24HourFormat(true)
{
    // 不再强制指定字体家族，交由系统默认字体渲染，保证跟随系统字体设置
    const QString systemFontFamily = QGuiApplication::font().family();
    const QFont::Weight heavyWeight = resolveHeavyWeight(systemFontFamily);

    m_dateLabel = new QLabel;
    m_dateLabel->setAlignment(Qt::AlignCenter);
    QPalette palette = m_dateLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::white);
    m_dateLabel->setPalette(palette);
    // 日期使用半粗体（Semibold/DemiBold）
    DFontSizeManager::instance()->bind(m_dateLabel, DFontSizeManager::T6, QFont::DemiBold);

    m_timeLabel = new QLabel;
    m_timeLabel->setAlignment(Qt::AlignCenter);
    palette = m_timeLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::white);
    m_timeLabel->setPalette(palette);
    // 时钟使用系统字体的最重字重（Heavy/Black，若系统字体不提供则依次降级）
    DFontSizeManager::instance()->bind(m_timeLabel, DFontSizeManager::T1, heavyWeight);

    refreshTime();

    m_refreshTimer = new QTimer(this);
    m_refreshTimer->setInterval(1000);
    m_refreshTimer->start();

    // 日期显示在时钟上方
    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget(m_dateLabel);
    vLayout->addWidget(m_timeLabel);
    vLayout->setSpacing(0);
    vLayout->setContentsMargins(0, 0, 0, 0);

    setLayout(vLayout);

    connect(m_refreshTimer, &QTimer::timeout, this, &TimeWidget::refreshTime);
}

void TimeWidget::set24HourFormat(bool use24HourFormat)
{
    m_use24HourFormat = use24HourFormat;
    refreshTime();
}

void TimeWidget::updateLocale(const QLocale &locale)
{
    m_locale = locale;
    refreshTime();
}

void TimeWidget::refreshTime()
{
    if (m_use24HourFormat) {
        m_timeLabel->setText(m_locale.toString(QDateTime::currentDateTime(), shortTimeFormat.at(m_shortTimeIndex)));
    } else {
        m_timeLabel->setText(m_locale.toString(QDateTime::currentDateTime(), shortTimeFormat.at(m_shortTimeIndex) + " AP"));
    }

    QString date_format = shortDateFormat.at(m_shortDateIndex) + " " + weekdayFormat.at(m_weekdayIndex);
    m_dateLabel->setText(m_locale.toString(QDateTime::currentDateTime(), date_format));

#ifdef ENABLE_DSS_SNIPE
    if (!m_shortTimeFormat.isEmpty() && !m_shortDateFormat.isEmpty()) {
        m_timeLabel->setText(m_locale.toString(QTime::currentTime(), m_shortTimeFormat));
        m_dateLabel->setText(m_locale.toString(QDate::currentDate(), m_shortDateFormat + " " + weekdayFormat.at(m_weekdayIndex)));
    }
#endif // ENABLE_DSS_SNIPE
}

/**
 * @brief TimeWidget::setWeekdayFormatType 根据类型来设置周显示格式
 * @param type 自定义类型
 */
void TimeWidget::setWeekdayFormatType(int type)
{
    if(type >= weekdayFormat.size() || type < 0) return;

    m_weekdayIndex = type;
    refreshTime();
}

/**
 * @brief TimeWidget::setShortDateFormat 根据类型来设置短日期显示格式
 * @param type 自定义格式
 */
void TimeWidget::setShortDateFormat(int type)
{
    if(type >= shortDateFormat.size() || type < 0) return;

    m_shortDateIndex = type;
    refreshTime();
}

/**
 * @brief TimeWidget::setShortTimeFormat 根据类型来设置短时间显示格式
 * @param type
 */
void TimeWidget::setShortTimeFormat(int type)
{
    if(type >= shortTimeFormat.size() || type < 0) return;

    m_shortTimeIndex = type;
    refreshTime();
}

QSize TimeWidget::sizeHint() const
{
    return QSize(QWidget::sizeHint().width(), m_dateLabel->fontMetrics().height() + m_timeLabel->fontMetrics().height());
}

#ifdef ENABLE_DSS_SNIPE
void TimeWidget::updateLocale(const QString &locale, const QString &shortTimeFormat, const QString &shortDateFormat)
{
    m_locale = QLocale(locale);
    if (!shortTimeFormat.isEmpty())
        m_shortTimeFormat = shortTimeFormat;
    if (!shortDateFormat.isEmpty())
        m_shortDateFormat = shortDateFormat;
    
    refreshTime();
}
#endif // ENABLE_DSS_SNIPE
