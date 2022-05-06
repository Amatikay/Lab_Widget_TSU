#ifndef WINDOW_H
#define WINDOW_H


#include <QPushButton>
#include <QtGui>
#include "area.h"
class Window : public QWidget
{protected:
Area * area;
QPushButton * btn;
public:
Window();
};
#endif
