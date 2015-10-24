#include "readDataSocket.h"

extern quint16 cmd_type;


/*链接到服务器*/
bool connectServer(QTcpSocket *socket)
{


	socket->connectToHost("192.168.0.71", 6666);
	//socket->connectToHost("127.0.0.1", 6666);
	if (!socket->waitForConnected(1000))
	{
		return false;
	}
	else
	{
		return true;
	}
}
/*向server发送读取文件列表请求*/
void sendReadFileList(QTcpSocket *socket_RD)
{
	cmd_type = READ_FILELIST;
	QByteArray block;
	QDataStream out(&block, QIODevice::ReadWrite);
	out.setVersion(QDataStream::Qt_5_5);
	out << (quint16)cmd_type;
	socket_RD->write(block);
	socket_RD->waitForBytesWritten();
}

/*get server送达的文件列表*/
void readServerFlieList()
{
	//ui->readFlieListWidget->clear();
	extern QTcpSocket *socket_RD;//zzuo作为一个形参传递更好，不用使用外部变量了
	QDataStream in(socket_RD);
	in.setVersion(QDataStream::Qt_5_5);


	extern struct File_List_struct  filelist;
	in >> filelist.fileNameList; //这里如果加入强行类型转换会出错，
	//in >> （qstringList ）filelist.fileNameList; 因为本来就是一个stringlist再stringlist？？？
	//但是在发送中，可以再次强行类型转换，，，，why？？
	socket_RD->waitForBytesWritten();

	socket_RD->disconnectFromHost();//这个必须在这里断开，不可以放在新建链接前断开原有链接，退出后原有的socket生命周期
	socket_RD->waitForDisconnected();
	//socket_RD->abort();
}

/*向server发送一个请求，读取一个文件*/
bool  sendReadFileName(QTcpSocket * socket_RD)
{
	cmd_type = READ_FILE;
	QByteArray block;
	QDataStream out(&block, QIODevice::ReadWrite);
	out.setVersion(QDataStream::Qt_5_5);

	struct send_Read_File_struct readFile;
	readFile.flag = 0x0001;
	extern QString exterStr;
	readFile.start_fileName = exterStr;

	out << cmd_type;
	out << readFile.flag;
	out << readFile.start_fileName;
	if (socket_RD->write(block))
	{
		return true;
	}
	else
	{
		return false;
	}

	socket_RD->waitForBytesWritten();//等待写入
	//socket_RD->abort();//写完后断开
}



qint64 totalBytes = 0;  //存放总大小信息  
qint64 bytesReceived = 0;  //已收到数据的大小  
QByteArray inBlock = 0;   //数据缓冲区  
struct read_File_Content readFile;//这个定义在内部，在多次从readyread调用次函数的时候，会导致出错。。。。
bool readFileContent(QTcpSocket *socket)
{
	QByteArray inBlock;
	QDataStream in(socket);
	in.setVersion(QDataStream::Qt_5_5);

	//struct read_File_Content readFile;//放在里面会出问题，因为每次从readyread进来，都会有新的内存，因为退出了这个函数就会释放掉，，

	if (bytesReceived <= sizeof(quint64) + sizeof(quint16) )//文件大小判定估算的，非实际对应大小，qstring非固定长度
	{
		if (socket->bytesAvailable() >= sizeof(quint64))
		{
			in >> readFile.size >> readFile.flag >> readFile.fName;
			QDir dir;
			dir.mkdir("F:/receiveFromServerFile/");
			QString filename = readFile.fName;
			readFile.fileContent = new QFile("F:/receiveFromServerFile/" + filename);
			//QFile::rename("D:/yun/FPGA_c_pcb_m_all/Visual Studio 2013/my_project/receiveFromServerFile/r", "D:/yun/FPGA_c_pcb_m_all/Visual Studio 2013/my_project/receiveFromServerFile/readFile.fName");
			//readFile.fileContent->setFileName(readFile.fName);
			if (!readFile.fileContent->open(QFile::WriteOnly))
			{
				return false;
			}
			
		}

		bytesReceived += (sizeof(quint64)+sizeof(quint16) + readFile.fName.size());
	}
	if (bytesReceived < readFile.size && !readFile.fName.isEmpty())
	{
		bytesReceived += socket->bytesAvailable();
		inBlock = socket->readAll();
		//readFile.fileContent->write(inBlock);
		QTextStream textIn(readFile.fileContent);
		textIn << inBlock;

		inBlock.resize(0);
	}
	if (bytesReceived == readFile.size)
	{
		readFile.fileContent->close();
		socket->disconnectFromHost();
		socket->waitForDisconnected();
	}
}


