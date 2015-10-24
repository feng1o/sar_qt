#ifndef READDATADIALOG_H
#define READDATADIALOG_H


#include <QDialog>
#include "ui_readdatadialog.h"

#include "QMessageBox"

//文件
#include "QFile"
#include "QListWidgetItem"
#include "QFileDialog"
#include "QDir"

#include "QString"//读取文件所需

#include "QTextStream"
#include "QCloseEvent"
#include "QtNetwork/QAbstractSocket"
#include "QTcpSocket"




class readDataDialog : public QDialog
{
	Q_OBJECT

public:
	readDataDialog(QWidget *parent = 0);
	~readDataDialog();


	QString readSignalFileLineEdit_str;//为了暂时保存读取的文件信息,

signals:
	void sendFileNameSignal(const QString&);//发射信号

	void closeDialogEventSignal(const QString &);

private:
	Ui::readDataDialog *ui;
	//friend class drawMainWindow; //有缘关系


private slots:
	void readFileListSlot();
	void getReadFileNameFromFileListSlot(QListWidgetItem *);//从文件夹里面读取文件到单个文件输入框

	//void readDataToMainWindowSlot();

				//void readDataDialog::readDataToMainWindowSlot() //不可定义在这里，应为是qobject，都会生产一个ui_touwenj的
				//{
				//}
	void readSignalFlieAdmitButton_emitSlot();
	void readMultiFileAdmitButton_emitSlot();

	void displayTcpSocketError(QAbstractSocket::SocketError);//用到窗口部件
	void disconnectSlot();//用到窗口部件
	void readServerFlieListSlot(); //读取server发过来的文件列表，，
	void readFileContent2();

private:
	void closeEvent(QCloseEvent *);
};




#endif // READDATADIALOG_H


