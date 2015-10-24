/********************************************************************************
** Form generated from reading UI file 'readdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READDATADIALOG_H
#define UI_READDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_readDataDialog
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *readSignalFileLineEdit;
    QPushButton *readSignlaFileAdmitButton;
    QPushButton *readMultiFileAdmitButton;
    QLineEdit *readMultiFileLineEdit;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QPushButton *readFileListButton;
    QListWidget *readFlieListWidget;

    void setupUi(QDialog *readDataDialog)
    {
        if (readDataDialog->objectName().isEmpty())
            readDataDialog->setObjectName(QStringLiteral("readDataDialog"));
        readDataDialog->resize(523, 642);
        label = new QLabel(readDataDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 0, 171, 51));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        line = new QFrame(readDataDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 40, 591, 16));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        line->setFont(font1);
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        label_3 = new QLabel(readDataDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 110, 121, 21));
        QFont font2;
        font2.setPointSize(15);
        label_3->setFont(font2);
        label_4 = new QLabel(readDataDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 380, 121, 21));
        label_4->setFont(font2);
        label_5 = new QLabel(readDataDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 150, 71, 31));
        label_5->setFont(font2);
        label_6 = new QLabel(readDataDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 410, 111, 31));
        QFont font3;
        font3.setPointSize(11);
        label_6->setFont(font3);
        readSignalFileLineEdit = new QLineEdit(readDataDialog);
        readSignalFileLineEdit->setObjectName(QStringLiteral("readSignalFileLineEdit"));
        readSignalFileLineEdit->setGeometry(QRect(270, 180, 201, 81));
        readSignlaFileAdmitButton = new QPushButton(readDataDialog);
        readSignlaFileAdmitButton->setObjectName(QStringLiteral("readSignlaFileAdmitButton"));
        readSignlaFileAdmitButton->setGeometry(QRect(340, 270, 75, 23));
        readMultiFileAdmitButton = new QPushButton(readDataDialog);
        readMultiFileAdmitButton->setObjectName(QStringLiteral("readMultiFileAdmitButton"));
        readMultiFileAdmitButton->setGeometry(QRect(340, 540, 75, 23));
        readMultiFileLineEdit = new QLineEdit(readDataDialog);
        readMultiFileLineEdit->setObjectName(QStringLiteral("readMultiFileLineEdit"));
        readMultiFileLineEdit->setGeometry(QRect(270, 440, 201, 81));
        line_2 = new QFrame(readDataDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 580, 241, 20));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(readDataDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(250, 360, 241, 20));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(readDataDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(240, 370, 20, 221));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(readDataDialog);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(480, 370, 20, 221));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::VLine);
        line_6 = new QFrame(readDataDialog);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(480, 100, 20, 221));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setFrameShape(QFrame::VLine);
        line_7 = new QFrame(readDataDialog);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(240, 100, 20, 221));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setFrameShape(QFrame::VLine);
        line_8 = new QFrame(readDataDialog);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(250, 310, 241, 20));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setFrameShape(QFrame::HLine);
        line_9 = new QFrame(readDataDialog);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(250, 90, 241, 20));
        line_9->setFrameShadow(QFrame::Plain);
        line_9->setFrameShape(QFrame::HLine);
        readFileListButton = new QPushButton(readDataDialog);
        readFileListButton->setObjectName(QStringLiteral("readFileListButton"));
        readFileListButton->setGeometry(QRect(0, 61, 201, 31));
        QFont font4;
        font4.setPointSize(14);
        readFileListButton->setFont(font4);
        readFlieListWidget = new QListWidget(readDataDialog);
        readFlieListWidget->setObjectName(QStringLiteral("readFlieListWidget"));
        readFlieListWidget->setGeometry(QRect(0, 90, 201, 551));

        retranslateUi(readDataDialog);

        QMetaObject::connectSlotsByName(readDataDialog);
    } // setupUi

    void retranslateUi(QDialog *readDataDialog)
    {
        readDataDialog->setWindowTitle(QApplication::translate("readDataDialog", "readDataDialog", 0));
        label->setText(QApplication::translate("readDataDialog", "\346\226\207\344\273\266\350\257\273\345\217\226\347\225\214\351\235\242", 0));
        label_3->setText(QApplication::translate("readDataDialog", "\350\257\273\345\217\226\345\215\225\344\270\252\346\226\207\344\273\266", 0));
        label_4->setText(QApplication::translate("readDataDialog", "\350\257\273\345\217\226\345\244\232\344\270\252\346\226\207\344\273\266", 0));
        label_5->setText(QApplication::translate("readDataDialog", "\346\226\207\344\273\266\345\220\215\357\274\232", 0));
        label_6->setText(QApplication::translate("readDataDialog", "\345\274\200\345\247\213\346\226\207\344\273\266\345\220\215\357\274\232", 0));
        readSignlaFileAdmitButton->setText(QApplication::translate("readDataDialog", "\347\241\256\345\256\232", 0));
        readMultiFileAdmitButton->setText(QApplication::translate("readDataDialog", "\347\241\256\345\256\232", 0));
        readFileListButton->setText(QApplication::translate("readDataDialog", "\346\226\207\344\273\266\350\257\273\345\217\226\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class readDataDialog: public Ui_readDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READDATADIALOG_H
