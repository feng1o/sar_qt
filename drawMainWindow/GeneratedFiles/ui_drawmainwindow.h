/********************************************************************************
** Form generated from reading UI file 'drawmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWMAINWINDOW_H
#define UI_DRAWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drawMainWindowClass
{
public:
    QAction *actionSetSysParameter;
    QAction *actionTestCommandDialog;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_readData;
    QMenu *menu_displayData;
    QMenu *menu_Command;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *drawMainWindowClass)
    {
        if (drawMainWindowClass->objectName().isEmpty())
            drawMainWindowClass->setObjectName(QStringLiteral("drawMainWindowClass"));
        drawMainWindowClass->resize(862, 796);
        actionSetSysParameter = new QAction(drawMainWindowClass);
        actionSetSysParameter->setObjectName(QStringLiteral("actionSetSysParameter"));
        actionTestCommandDialog = new QAction(drawMainWindowClass);
        actionTestCommandDialog->setObjectName(QStringLiteral("actionTestCommandDialog"));
        centralWidget = new QWidget(drawMainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/baiduMusicPlayerPNG/default_lyric_artist_pic.png);"));

        verticalLayout->addWidget(textEdit);

        drawMainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(drawMainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 862, 23));
        menu_readData = new QMenu(menuBar);
        menu_readData->setObjectName(QStringLiteral("menu_readData"));
        menu_displayData = new QMenu(menuBar);
        menu_displayData->setObjectName(QStringLiteral("menu_displayData"));
        menu_Command = new QMenu(menuBar);
        menu_Command->setObjectName(QStringLiteral("menu_Command"));
        drawMainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(drawMainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        drawMainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(drawMainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        drawMainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu_readData->menuAction());
        menuBar->addAction(menu_displayData->menuAction());
        menuBar->addAction(menu_Command->menuAction());
        menu_Command->addAction(actionSetSysParameter);
        menu_Command->addAction(actionTestCommandDialog);

        retranslateUi(drawMainWindowClass);

        QMetaObject::connectSlotsByName(drawMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *drawMainWindowClass)
    {
        drawMainWindowClass->setWindowTitle(QApplication::translate("drawMainWindowClass", "drawMainWindow", 0));
        actionSetSysParameter->setText(QApplication::translate("drawMainWindowClass", "\350\256\276\347\275\256\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        actionTestCommandDialog->setText(QApplication::translate("drawMainWindowClass", "\346\265\213\350\257\225\345\221\275\344\273\244\351\235\242\346\235\277", 0));
        menu_readData->setTitle(QApplication::translate("drawMainWindowClass", "\350\257\273\345\217\226\346\225\260\346\215\256(R)", 0));
        menu_displayData->setTitle(QApplication::translate("drawMainWindowClass", "\346\230\276\347\244\272\346\225\260\346\215\256(&D)", 0));
        menu_Command->setTitle(QApplication::translate("drawMainWindowClass", "\346\216\247\345\210\266\345\221\275\344\273\244\351\235\242\346\235\277(&C)", 0));
    } // retranslateUi

};

namespace Ui {
    class drawMainWindowClass: public Ui_drawMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMAINWINDOW_H
