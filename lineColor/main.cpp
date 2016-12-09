#include "linecolor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	lineColor w;
	w.resize(500, 500);
	w.show();
	return a.exec();
}
