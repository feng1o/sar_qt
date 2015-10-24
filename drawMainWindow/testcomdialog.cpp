#include "testcomdialog.h"

#include "dataStruct.h"
#include "QThread"


extern quint16 cmd_type;          //这个声明的外部变量，头文件多出包含，
QTcpSocket *socket_TC;

testComDialog::testComDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	setMinimumSize(412, 377);
	setMaximumSize(412, 377);

	ui.FrequencyMediumLineEdit->setText("0000"); 
	ui.BandLineEdit->setText("0000");
	ui.PRFLineEdit->setText("0000"); 
	ui.plusWidthLineEdit->setText("0000");
	ui.attenuationMultiLineEdit->setText("0000");

	socket_TC = new QTcpSocket; //创建一个socket


	QObject::connect(ui.frequencyMediumAdmitButton, SIGNAL(clicked()), this, SLOT(setFrequencyMediuSlot()));
	
	QObject::connect(ui.bandAdmitButton, SIGNAL(clicked()), this, SLOT(setBandSlot()));
	QObject::connect(ui.PRF_AdmitButton, SIGNAL(clicked()), this, SLOT(setPRF_Slot()));
	QObject::connect(ui.plusWidthAdmitButton, SIGNAL(clicked()), this, SLOT(setPlusWidthSlot()));
	QObject::connect(ui.attenuationMultiAdmitButton, SIGNAL(clicked()), this, SLOT(setAttenuationMultiSlot()));
	QObject::connect(ui.testParameterCom_CancelButton, SIGNAL(clicked()), this, SLOT(close()));

	QObject::connect(ui.testParameterCom_SubmitButton, SIGNAL(clicked()), this, SLOT(saveAllParameterSlot()));
	QObject::connect(ui.testParameterCom_SubmitButton, SIGNAL(clicked()), this, SLOT(saveTestParameterSlot()));
}



testComDialog::~testComDialog()
{

}



void testComDialog::setFrequencyMediuSlot()
{
	//QString frequencyMediuString = ui.FrequencyMediumLineEdit->text();
	
	QMessageBox::information(this, "Initial", QString::fromLocal8Bit("频率初始化：")+frequencyMediuString);
	frequencyMediuString = ui.FrequencyMediumLineEdit->text();
	QMessageBox::information(this, "Set", QString::fromLocal8Bit("设置频率：")+frequencyMediuString);
	

}

void testComDialog::setBandSlot()
{
	//QString bandString = ui.BandLineEdit->text();
	bandString = ui.BandLineEdit->text();
	//	QMessageBox::information(this, "frequency", bandString);

}

void testComDialog::setPRF_Slot()
{
	//QString 
	PRFstring = ui.PRFLineEdit->text();
	//QMessageBox::information(this, "frequency", PRFstring);
}

void testComDialog::setPlusWidthSlot()
{
	//QString 
	plusWidthString = ui.plusWidthLineEdit->text();
	//QMessageBox::information(this, "frequency", plusWidthString);
}

void testComDialog::setAttenuationMultiSlot()
{
	//QString
	attenuationMultiString = ui.attenuationMultiLineEdit->text();
	//QMessageBox::information(this, "frequency", attenuationMultiString);
}

void testComDialog::saveTestParameterSlot()
{
			#if 0
				QFile file;
				QDir::setCurrent("/tmp");
				file.setFileName("readme.txt");
				QDir::setCurrent("/home");
				file.open(QIODevice::ReadOnly);      // opens "/home/readme.txt" under Unix
			#endif
	
	QFile file_RF_parameter;
	QDir::current();
			#if 0
				QDir cd("F:/temp");
				QDir d;
				d.mkpath("F:/123");//创建一个文件夹
				QMessageBox::information(this, QString::fromLocal8Bit("参数保存路径提示"), QDir::currentPath());
			#endif

	file_RF_parameter.setFileName("RF_parameter.text");


	//QString fileName = QFileDialog::getSaveFileName(this, "liufeng", QDir::currentPath());
	//if (fileName.isEmpty())
	//{
	//	QMessageBox::warning(this, "error", "no filename");
	//}
	if (!file_RF_parameter.open(QIODevice::WriteOnly))
	{
		QMessageBox::warning(this, "error", "no filename");
		return;
	}
	QTextStream TextOut(&file_RF_parameter);
	TextOut << frequencyMediuString<<endl<<flush;
	TextOut << bandString <<endl ;
	TextOut << PRFstring  << endl;
	TextOut << plusWidthString << endl;
	TextOut << attenuationMultiString  << endl;
	file_RF_parameter.close();


	cmd_type = RF_PARAMETER_SET;
	//socket_TC->connectToHost("127.0.0.1", 6666);
	socket_TC->connectToHost("192.168.0.71", 6666);
	if (!socket_TC->waitForConnected(1000))
	{
		QMessageBox::warning(this, "error", socket_TC->errorString());
	}

	/*发送tcpsocket命令*/
	cmd_type = RF_PARAMETER_SET ;
	QByteArray block;
	QDataStream out(&block, QIODevice::ReadWrite);
	out.setVersion(QDataStream::Qt_5_5);
	out << (quint16)cmd_type;
	socket_TC->write(block);
	socket_TC->waitForBytesWritten(1000);
	socket_TC->abort();

}

void testComDialog::saveAllParameterSlot()
{
	setFrequencyMediuSlot();

	setBandSlot();
	setPRF_Slot();
	setPlusWidthSlot();
	setAttenuationMultiSlot();

}

