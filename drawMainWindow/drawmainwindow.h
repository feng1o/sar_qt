#ifndef DRAWMAINWINDOW_H
#define DRAWMAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_drawmainwindow.h"
#include "QLabel"
#include "QStatusBar"

class drawMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	drawMainWindow(QWidget *parent = 0);
	~drawMainWindow();

	QString readdata = "";

private:
	Ui::drawMainWindowClass *ui;


	private slots:
	void readDataDialogSlot();
	void testComDialogSlot();
	void showReadFileInfoSlot();

	void receiveReadSignalFileNameSlot(const QString &);

	void showQuanjuStringSlot();
};

#endif // DRAWMAINWINDOW_H
