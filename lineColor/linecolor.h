#ifndef LINECOLOR_H
#define LINECOLOR_H

#include <QtWidgets/QWidget>
#include <qpainter.h>
#include "ui_linecolor.h"

class lineColor : public QWidget
{
	Q_OBJECT

public:
	lineColor(QWidget *parent = 0);
	~lineColor();
protected:
	void paintEvent(QPaintEvent*);
private:
	Ui::lineColorClass ui;
};

#endif // LINECOLOR_H
