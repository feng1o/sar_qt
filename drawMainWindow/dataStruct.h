#ifndef  _DATASTRUCT_H
#define  _DATASTRUCT_H

#include "QtCore/QString"
#include "QtGlobal"
#include "QtCore/QStringList"
#include "QTime"
#include "QFile"

/*
命令类型
*/

#define  SAR_STATE          0
#define  RF_PARAMETER_SET   1
#define  READ_FILELIST      2
#define  READ_FILE          3
#define  DELETE_FILE        4
#define  FORMAT_FILE        5
#define  RF_PARAMETER_TEST  6


//quint16 cmd_type = SAR_STATE; //变量声明后，只可以在一个cpp文件中使用，多个就重复定义

/*
设置系统参数命令，读取client界面中输入的数据
*/
struct rf_Parameter_struct
{
	QString FRQ_String;
	QString BAND_String;
	QString PRf_String;
	QString PWD_String;
	QString ATT_String;
	QString TUNE_String;

	QString start = "start:";
	QString endx = "endx";
	//1 中心频率(单位MHz)
	//2 带宽(单位MHz)
	//3 脉冲重复频率
	//4 脉冲宽度
	//5 衰减器dB
	//6调谐频率(NCO)
	//endx(结束)
};

/*
读取文件列表
*/
struct File_List_struct
{

	QStringList  fileNameList;
};

/*
发送要读取的文件名给server
*/
struct send_Read_File_struct
{
	quint16  flag; //1就是读一个文件，，0就是读多个文件
	QString  start_fileName;
};
/*读取文件内容*/
struct read_File_Content
{
	quint64 size;
	quint16 flag;
	//QString  fileName;
	QString fName;
	QFile *fileContent;
};

/*
删除文件
*/
struct delete_File_struct
{
	QTime startTime;
	unsigned char line;
	QTime stopTime;
};





#endif // ! _DATASTRUCT_H
