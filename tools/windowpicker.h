/*
 * Copyright (C) 2016  Christian Kaiser
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#ifndef WINDOWPICKER_H
#define WINDOWPICKER_H

#include <QWidget>

class QLabel;
class QRect;
class QRubberBand;
class WindowPicker : public QWidget
{
    Q_OBJECT

public:
    WindowPicker();
    ~WindowPicker();

signals:
    void pixmap(const QPixmap &pixmap);

protected:
    void closeEvent(QCloseEvent *);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    void cancel();

private:
    QPixmap mCrosshair;
    QLabel *mCrosshairLabel;
    QLabel *mWindowIcon;
    QLabel *mWindowLabel;
    WId mCurrentWindow;
    bool mTaken;
};

#endif // WINDOWPICKER_H
