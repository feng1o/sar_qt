/********************************************************************************
** Form generated from reading UI file 'testcomdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCOMDIALOG_H
#define UI_TESTCOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testComDialog
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *frequencyMediumAdmitButton;
    QPushButton *bandAdmitButton;
    QPushButton *PRF_AdmitButton;
    QPushButton *plusWidthAdmitButton;
    QPushButton *attenuationMultiAdmitButton;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QPushButton *testParameterCom_SubmitButton;
    QPushButton *testParameterCom_CancelButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *FrequencyMediumLineEdit;
    QLineEdit *BandLineEdit;
    QLineEdit *PRFLineEdit;
    QLineEdit *plusWidthLineEdit;
    QLineEdit *attenuationMultiLineEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_12;

    void setupUi(QDialog *testComDialog)
    {
        if (testComDialog->objectName().isEmpty())
            testComDialog->setObjectName(QStringLiteral("testComDialog"));
        testComDialog->resize(412, 377);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(testComDialog->sizePolicy().hasHeightForWidth());
        testComDialog->setSizePolicy(sizePolicy);
        label = new QLabel(testComDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 0, 181, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        line = new QFrame(testComDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 30, 441, 16));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        label_2 = new QLabel(testComDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 52, 16));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_4 = new QLabel(testComDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 120, 26, 31));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_6 = new QLabel(testComDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(31, 169, 78, 21));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);
        label_8 = new QLabel(testComDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 210, 52, 31));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font1);
        label_10 = new QLabel(testComDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 260, 52, 16));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font1);
        frequencyMediumAdmitButton = new QPushButton(testComDialog);
        frequencyMediumAdmitButton->setObjectName(QStringLiteral("frequencyMediumAdmitButton"));
        frequencyMediumAdmitButton->setGeometry(QRect(290, 77, 75, 23));
        bandAdmitButton = new QPushButton(testComDialog);
        bandAdmitButton->setObjectName(QStringLiteral("bandAdmitButton"));
        bandAdmitButton->setGeometry(QRect(290, 122, 75, 23));
        PRF_AdmitButton = new QPushButton(testComDialog);
        PRF_AdmitButton->setObjectName(QStringLiteral("PRF_AdmitButton"));
        PRF_AdmitButton->setGeometry(QRect(290, 167, 75, 23));
        plusWidthAdmitButton = new QPushButton(testComDialog);
        plusWidthAdmitButton->setObjectName(QStringLiteral("plusWidthAdmitButton"));
        plusWidthAdmitButton->setGeometry(QRect(290, 212, 75, 23));
        attenuationMultiAdmitButton = new QPushButton(testComDialog);
        attenuationMultiAdmitButton->setObjectName(QStringLiteral("attenuationMultiAdmitButton"));
        attenuationMultiAdmitButton->setGeometry(QRect(290, 257, 75, 23));
        line_2 = new QFrame(testComDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 300, 361, 20));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(testComDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 50, 20, 261));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(testComDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(370, 50, 16, 261));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(testComDialog);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 40, 361, 20));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::HLine);
        testParameterCom_SubmitButton = new QPushButton(testComDialog);
        testParameterCom_SubmitButton->setObjectName(QStringLiteral("testParameterCom_SubmitButton"));
        testParameterCom_SubmitButton->setGeometry(QRect(80, 320, 70, 32));
        testParameterCom_CancelButton = new QPushButton(testComDialog);
        testParameterCom_CancelButton->setObjectName(QStringLiteral("testParameterCom_CancelButton"));
        testParameterCom_CancelButton->setGeometry(QRect(240, 320, 70, 32));
        layoutWidget = new QWidget(testComDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 60, 141, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FrequencyMediumLineEdit = new QLineEdit(layoutWidget);
        FrequencyMediumLineEdit->setObjectName(QStringLiteral("FrequencyMediumLineEdit"));
        FrequencyMediumLineEdit->setEnabled(true);

        verticalLayout->addWidget(FrequencyMediumLineEdit);

        BandLineEdit = new QLineEdit(layoutWidget);
        BandLineEdit->setObjectName(QStringLiteral("BandLineEdit"));
        BandLineEdit->setEnabled(true);

        verticalLayout->addWidget(BandLineEdit);

        PRFLineEdit = new QLineEdit(layoutWidget);
        PRFLineEdit->setObjectName(QStringLiteral("PRFLineEdit"));

        verticalLayout->addWidget(PRFLineEdit);

        plusWidthLineEdit = new QLineEdit(layoutWidget);
        plusWidthLineEdit->setObjectName(QStringLiteral("plusWidthLineEdit"));

        verticalLayout->addWidget(plusWidthLineEdit);

        attenuationMultiLineEdit = new QLineEdit(layoutWidget);
        attenuationMultiLineEdit->setObjectName(QStringLiteral("attenuationMultiLineEdit"));

        verticalLayout->addWidget(attenuationMultiLineEdit);

        layoutWidget1 = new QWidget(testComDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 60, 23, 241));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font1);

        verticalLayout_4->addWidget(label_11);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);

        verticalLayout_4->addWidget(label_3);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);

        verticalLayout_4->addWidget(label_7);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);

        verticalLayout_4->addWidget(label_9);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);

        verticalLayout_4->addWidget(label_12);

        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        line->raise();
        label_2->raise();
        label_4->raise();
        label_6->raise();
        label_8->raise();
        label_10->raise();
        frequencyMediumAdmitButton->raise();
        bandAdmitButton->raise();
        PRF_AdmitButton->raise();
        plusWidthAdmitButton->raise();
        attenuationMultiAdmitButton->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        testParameterCom_SubmitButton->raise();
        testParameterCom_CancelButton->raise();

        retranslateUi(testComDialog);

        QMetaObject::connectSlotsByName(testComDialog);
    } // setupUi

    void retranslateUi(QDialog *testComDialog)
    {
        testComDialog->setWindowTitle(QApplication::translate("testComDialog", "testComDialog", 0));
        label->setText(QApplication::translate("testComDialog", "\345\217\202\346\225\260\350\256\276\347\275\256\346\265\213\350\257\225\345\221\275\344\273\244\347\225\214\351\235\242", 0));
        label_2->setText(QApplication::translate("testComDialog", "\344\270\255\345\277\203\351\242\221\347\216\207", 0));
        label_4->setText(QApplication::translate("testComDialog", "\345\270\246\345\256\275", 0));
        label_6->setText(QApplication::translate("testComDialog", "\350\204\211\345\206\262\351\207\215\345\244\215\351\242\221\347\216\207", 0));
        label_8->setText(QApplication::translate("testComDialog", "\350\204\211\345\206\262\345\256\275\345\272\246", 0));
        label_10->setText(QApplication::translate("testComDialog", "\350\241\260\345\207\217\345\200\215\346\225\260", 0));
        frequencyMediumAdmitButton->setText(QApplication::translate("testComDialog", "\347\241\256\345\256\232", 0));
        bandAdmitButton->setText(QApplication::translate("testComDialog", "\347\241\256\345\256\232", 0));
        PRF_AdmitButton->setText(QApplication::translate("testComDialog", "\347\241\256\345\256\232", 0));
        plusWidthAdmitButton->setText(QApplication::translate("testComDialog", "\347\241\256\345\256\232", 0));
        attenuationMultiAdmitButton->setText(QApplication::translate("testComDialog", "\347\241\256\345\256\232", 0));
        testParameterCom_SubmitButton->setText(QApplication::translate("testComDialog", "\347\241\256\350\256\244", 0));
        testParameterCom_CancelButton->setText(QApplication::translate("testComDialog", "\345\217\226\346\266\210", 0));
        label_11->setText(QApplication::translate("testComDialog", "MHz", 0));
        label_3->setText(QApplication::translate("testComDialog", "MHz", 0));
        label_7->setText(QApplication::translate("testComDialog", "Hz", 0));
        label_9->setText(QApplication::translate("testComDialog", "us", 0));
        label_12->setText(QApplication::translate("testComDialog", "dB", 0));
    } // retranslateUi

};

namespace Ui {
    class testComDialog: public Ui_testComDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCOMDIALOG_H
