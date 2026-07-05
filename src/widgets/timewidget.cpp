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

// 时钟在原有 T1 字号基础上再放大的倍数
const double ClockScaleFactor = 1.35;
// 如果系统字体（控制中心 -> 个性化 -> 字体）不可用时的备用字体链
const QStringList FontFallbackChain = { QStringLiteral("Noto Sans"), QStringLiteral("DejaVu Sans"), QStringLiteral("Sans Serif") };

/**
 * @brief resolveFontFamily 优先使用控制中心设置的系统字体，如果该字体未安装
 * 则依次尝试备用字体链，保证任何环境下都有可用字体。
 */
static QString resolveFontFamily()
{
    const QString systemFamily = QGuiApplication::font().family();
    const QStringList installedFamilies = QFontDatabase::families();
    if (!systemFamily.isEmpty() && installedFamilies.contains(systemFamily))
        return systemFamily;

    for (const QString &fallback : FontFallbackChain) {
        if (installedFamilies.contains(fallback))
            return fallback;
    }
    return systemFamily;
}

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
    m_dateLabel = new QLabel;
    m_dateLabel->setAlignment(Qt::AlignCenter);
    QPalette palette = m_dateLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::white);
    m_dateLabel->setPalette(palette);

    m_timeLabel = new QLabel;
    m_timeLabel->setAlignment(Qt::AlignCenter);
    palette = m_timeLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::white);
    m_timeLabel->setPalette(palette);

    applyFonts();
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

/**
 * @brief TimeWidget::applyFonts 应用时钟/日期字体：字体族跟随控制中心系统字体设置
 * （带备用字体链），时钟使用系统字体的最重字重并放大，日期使用中等（Medium）字重。
 * 由 refreshTime() 每秒重新调用一次，这样即使系统字体在运行时被修改，也能持续跟随。
 */
void TimeWidget::applyFonts()
{
    const QString fontFamily = resolveFontFamily();
    const QFont::Weight heavyWeight = resolveHeavyWeight(fontFamily);

    // 日期：中等字重
    DFontSizeManager::instance()->bind(m_dateLabel, DFontSizeManager::T6, QFont::Medium);
    QFont dateFont = m_dateLabel->font();
    dateFont.setFamily(fontFamily);
    m_dateLabel->setFont(dateFont);

    // 时钟：系统字体最重字重（Heavy/Black，若不支持则依次降级），并整体放大
    DFontSizeManager::instance()->bind(m_timeLabel, DFontSizeManager::T1, heavyWeight);
    QFont timeFont = m_timeLabel->font();
    timeFont.setFamily(fontFamily);
    timeFont.setPointSizeF(timeFont.pointSizeF() * ClockScaleFactor);
    m_timeLabel->setFont(timeFont);
}

void TimeWidget::refreshTime()
{
    applyFonts();

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
