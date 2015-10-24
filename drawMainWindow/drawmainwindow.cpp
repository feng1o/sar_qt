#include "drawmainwindow.h"
#include "readdatadialog.h"
#include "testcomdialog.h"
#include "QThread"


drawMainWindow::drawMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui = new Ui::drawMainWindowClass;
	ui->setupUi(this);
	ui->statusBar->showMessage("Ready");
	//receiveReadSignalFileNameSlot("akldgn"); //测试显示ok
	QObject::connect(ui->menu_readData, SIGNAL(aboutToShow()), this, SLOT(readDataDialogSlot()));
	QObject::connect(ui->actionTestCommandDialog, SIGNAL(triggered()), this, SLOT(testComDialogSlot()));
	
			
}
//extern QString quanjuString;//全局变量显示文件内容方式
drawMainWindow::~drawMainWindow()
{

}

void drawMainWindow::readDataDialogSlot()
{
	/*得到一个非模态窗口*/  //读文件列表据窗口
	//hide();  //是否影藏主窗口？？？
	readDataDialog *rDataDialog = new readDataDialog();
	QThread::msleep(10); 
	//信号和槽的方式，把dialog要读的文件显示到mainwindow里面 
	connect(rDataDialog, SIGNAL(sendFileNameSignal(const QString &)), this, SLOT(receiveReadSignalFileNameSlot(const QString &)));
	connect(rDataDialog, SIGNAL(closeDialogEventSignal(const QString&)), this, SLOT(receiveReadSignalFileNameSlot(const QString&)));
	rDataDialog->exec();
}

void drawMainWindow::testComDialogSlot()
{
	testComDialog tComDialog;
	tComDialog.exec();
}

void drawMainWindow::showReadFileInfoSlot()
{	

	//QMessageBox::information(this, "test", );
}


/*信号和槽的方式接收读取文件，然后读取所在目录文件并显示出来*/
void drawMainWindow::receiveReadSignalFileNameSlot(const QString &fileName)
{
	
}

void drawMainWindow::showQuanjuStringSlot()
{

	ui->textEdit->setText(readdata);
	if (readdata == "")
	{
		QMessageBox::information(this, "tips", QString::fromLocal8Bit("未打开文件，请打开"));
	}
}