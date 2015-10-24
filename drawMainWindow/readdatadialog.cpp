#include "readdatadialog.h"
#include "drawmainwindow.h"
#include "QThread"
#include "dataStruct.h"
#include "readDataSocket.h"

quint16 cmd_type;//其他文件使用external来访问
struct File_List_struct  filelist;

QTcpSocket * socket_RD;
readDataDialog::readDataDialog(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::readDataDialog;
	ui->setupUi(this);
	setMinimumSize(530, 641);
	setMaximumSize(530, 641);

	//socket_RD =  new QTcpSocket;

	QObject::connect(ui->readFileListButton, SIGNAL(clicked()), this, SLOT(readFileListSlot()));
	
		
	QObject::connect(ui->readFlieListWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(getReadFileNameFromFileListSlot(QListWidgetItem*)));

	QObject::connect(ui->readSignlaFileAdmitButton, SIGNAL(clicked()), this, SLOT(readSignalFlieAdmitButton_emitSlot()));
	QObject::connect(ui->readMultiFileAdmitButton, SIGNAL(clicked()), this, SLOT(readMultiFileAdmitButton_emitSlot()));
}
//QString quanjuString = QString::fromLocal8Bit("无数据！！!");

readDataDialog::~readDataDialog()
{
	delete ui;
	//delete socket_RD;
}


void readDataDialog::readFileListSlot()//读取文件列表
{
	ui->readFlieListWidget->clear();//清除列表

	socket_RD = new QTcpSocket;
	bool ok = connectServer(socket_RD);
	if (!ok)
	{
		QMessageBox::warning(this, "error", socket_RD->errorString());
	}

	//QObject::connect(socket_RD, SIGNAL(connected()), this, SLOT(sendReadFileList(socket_RD)));
	sendReadFileList(socket_RD); //应该使用connected信号再发送，，，后续改正
	connect(socket_RD, SIGNAL(QAbstractSocket::SocketError), this, SLOT(displayTcpSocketError()));
	connect(socket_RD, SIGNAL(disconnected()), this, SLOT(disconnectSlot()));
	QObject::connect(socket_RD, SIGNAL(readyRead()), this, SLOT(readServerFlieListSlot()));
	//socket_RD->abort();

	//socket_RD->write((const char*)& cmd_type, sizeof(quint16)); //直接写一个过去读取结果不对，可能qtversion未对应
	
	
}


/*获取文件列表中的某个文件到读单个文件输入窗口*/
void readDataDialog::getReadFileNameFromFileListSlot(QListWidgetItem *item)
{
	//QMessageBox::information(this, "test", "item:" + item->text());
	ui->readSignalFileLineEdit->setText(item->text());
	ui->readMultiFileLineEdit->setText(item->text());

}

//信号和槽的方式，把dialog要读的文件 名字 显示到mainwindow里面 
QString exterStr;
void readDataDialog::readSignalFlieAdmitButton_emitSlot() //按下就发射一个信号出去
{
	socket_RD = new QTcpSocket;
	bool ok = connectServer(socket_RD);
	if (!ok)
	{
		QMessageBox::warning(this, "error", socket_RD->errorString());
	}
	exterStr  = ui->readSignalFileLineEdit->text();
	sendReadFileName(socket_RD);//这里仍然是应该使用connected来做，，这样要设置关键字符在server判别，暂时无，，
	connect(socket_RD, SIGNAL(disconnected()), this, SLOT(disconnectSlot()));
	connect(socket_RD, SIGNAL(readyRead()), this, SLOT(readFileContent2()));

	QThread::msleep(10);//等待一会关闭窗口
	//close();
}

//信号和槽的方式，把dialog要读的文件 名字 显示到mainwindow里面 
void readDataDialog::readMultiFileAdmitButton_emitSlot() //按下就发射一个信号出去
{

	QThread::msleep(10);//等待一会关闭窗口
	//close();
}

/*关闭窗口事件触发 发射一个信号给主窗口，让其读取当前文件内容*/
void readDataDialog::closeEvent(QCloseEvent *event)
{
	emit closeDialogEventSignal(ui->readSignalFileLineEdit->text());
	event->accept();
}

void readDataDialog::displayTcpSocketError(QAbstractSocket::SocketError )
{
	QMessageBox::warning(this, "SocketError", socket_RD->errorString());
}

void readDataDialog::disconnectSlot()
{	
	//QMessageBox::information(this, "tip", "client connection closed!");
	socket_RD->deleteLater();
}

/*读取从server发送过来的文件列表*/
void readDataDialog::readServerFlieListSlot()
{
	ui->readFlieListWidget->clear();
	readServerFlieList();


	if (filelist.fileNameList.size() == 0)
	{
		QMessageBox::information(this, "note", QString::fromLocal8Bit("空文件夹"));
		return;
	}
	for (int index = 0; index < filelist.fileNameList.size(); index++)
	{
		if (filelist.fileNameList.at(index) == " " || filelist.fileNameList.at(index) == "  ")
		{
			continue;
		}
		QListWidgetItem *item = new QListWidgetItem;
		item->setText(filelist.fileNameList.at(index));
		ui->readFlieListWidget->addItem(item);
	}
	//socket_RD->close();
	
}

void readDataDialog::readFileContent2()
{
	//QMessageBox::information(this, "TIP", QString::fromLocal8Bit(" 进入读取文件开始读取文件。。。"));
	readFileContent(socket_RD);
}