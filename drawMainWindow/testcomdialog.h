#ifndef TESTCOMDIALOG_H
#define TESTCOMDIALOG_H

#include <QDialog>
#include "ui_testcomdialog.h"
#include "QFile"
#include "QString"
#include "QMessageBox"
#include "QDir"
#include "QFileDialog"
#include "QTextStream"
#include "QtNetwork/QTcpSocket"



class testComDialog : public QDialog
{
	Q_OBJECT

public:
	testComDialog(QWidget *parent = 0);
	~testComDialog();

	QString frequencyMediuString ;
	QString bandString ;
	QString PRFstring;
	QString plusWidthString;
	QString attenuationMultiString;
private:
	Ui::testComDialog ui;


private slots:
	void setFrequencyMediuSlot();
	void setBandSlot();
	void setPRF_Slot();
	void setPlusWidthSlot();
	void setAttenuationMultiSlot();

	void saveTestParameterSlot();
	void saveAllParameterSlot();
};

#endif // TESTCOMDIALOG_H
