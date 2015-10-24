#ifndef _MYSOCKET_H
#define _MYSOCKET_H

#include "QtNetwork/QHostAddress"
#include "QtNetwork/QAbstractSocket"
#include "QDataStream"
#include "dataStruct.h"
#include "QtCore/QString"
#include "QtNetwork/QTcpSocket"
#include "QThread"
#include "QDir"



bool connectServer(QTcpSocket *);

void sendReadFileList(QTcpSocket *);//请求获取文件列表

bool  sendReadFileName(QTcpSocket *);//发送准备读取文件名给server 文件读取按钮按下后开始

void readServerFlieList(); //读取server发过来的文件列表，，

void displayTcpSocketError(QAbstractSocket::SocketError);

bool readFileContent(QTcpSocket *);

#endif // !_MYSOCKET_H
