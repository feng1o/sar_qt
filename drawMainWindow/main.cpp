#include "drawmainwindow.h"
#include <QtWidgets/QApplication>

#include "QDir"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	drawMainWindow w;
	w.show();
	return a.exec();
}
