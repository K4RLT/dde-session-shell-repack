#include <QPainter>
// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "transparentbutton.h"

#include <DStyleOptionButton>

TransparentButton::TransparentButton(QWidget *parent)
    : DFloatingButton (parent)
{

};

void TransparentButton::setColor(const QColor &color)
{
    m_color = color;
    update();
}

void TransparentButton::paintEvent(QPaintEvent *event)
{
    if (m_rectMode) {
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        QColor bg = m_color.isValid() ? m_color : qApp->palette().highlight().color();
        if (!isEnabled()) bg.setAlphaF(0.4);
        p.setBrush(bg);
        p.setPen(Qt::NoPen);
        p.drawRoundedRect(rect(), 8, 8);
        QIcon ico = icon();
        if (!ico.isNull()) {
            QSize is = iconSize();
            QRect ir((width() - is.width()) / 2, (height() - is.height()) / 2,
                     is.width(), is.height());
            p.drawPixmap(ir, ico.pixmap(is, isEnabled() ? QIcon::Normal : QIcon::Disabled));
        }
        return;
    }
    Q_UNUSED(event)

    // 按钮不可用时颜色还是使用活动色，然后需要40%透明
    DStylePainter p(this);
    DStyleOptionButton opt;
    initStyleOption(&opt);

    if (!m_color.isValid()) {
        opt.palette.setBrush(QPalette::Button, qApp->palette().highlight());
    } else {
        opt.palette.setBrush(QPalette::Button, m_color);
    }

    if (isEnabled()) {
        p.setOpacity(1.0);
    } else {
        p.setOpacity(0.4);
    }

    p.drawControl(DStyle::CE_IconButton, opt);
};
