#include "linecolor.h"

lineColor::lineColor(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}


lineColor::~lineColor()
{

}

void lineColor::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	QColor color;
	QRect section;
	float colorBarLength = 343;//������ɫ���ĳ���

	//����hsv��ɫ��
	for (int i = 0; i <= colorBarLength; ++i)
	{
		color.setHsvF(i/colorBarLength,1,1);
		section.setRect(250,colorBarLength+50-i,20,1);
		painter.fillRect(section, color);
	}
}