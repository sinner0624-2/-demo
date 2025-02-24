/********************************************************************************
** Form generated from reading UI file 'FlowStone-MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWSTONE2_2D_MAINWINDOW_H
#define UI_FLOWSTONE2_2D_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *actionactionExportFile;
    QAction *actionactionExit;
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        actionactionExportFile = new QAction(MainWindow);
        actionactionExportFile->setObjectName(QString::fromUtf8("actionactionExportFile"));
        actionactionExit = new QAction(MainWindow);
        actionactionExit->setObjectName(QString::fromUtf8("actionactionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(false);
        centralwidget->setAutoFillBackground(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 801, 71));
        frame->setStyleSheet(QString::fromUtf8("background-color: #A9A9A9;  /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"height: 20px;                /* \350\256\276\347\275\256\347\237\251\345\275\242\347\232\204\351\253\230\345\272\246 */\n"
"border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 131, 71));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;  /* \350\256\276\347\275\256\346\214\211\351\222\256\350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"border: none;                    /* \345\216\273\351\231\244\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"color: #000000;                  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\344\277\256\346\224\271 */\n"
"font-weight: bold;               /* \350\256\276\347\275\256\346\226\207\345\255\227\345\212\240\347\262\227 */\n"
"font-family: \"\351\273\221\344\275\223\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223\344\270\272\345\276\256\350\275\257\351\233\205\351\273\221\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\346\261\202\344\277\256\346\224\271\344\270\272\345\205\266\344\273\226\345\255\227\344\275\223 */\n"
"font: 9pt ;\n"
"font-size: 14px;                 /* "
                        "\350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217\344\270\27214px\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"font: 11pt ;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/OpenFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionOpenFile);
        menu->addSeparator();
        menu->addAction(actionactionExportFile);
        menu->addSeparator();
        menu->addAction(actionactionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FlowStone1.0.0", nullptr));
        actionOpenFile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\250\241\345\236\213", nullptr));
        actionactionExportFile->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\346\250\241\345\236\213", nullptr));
        actionactionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\250\241\345\236\213", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWSTONE2_2D_MAINWINDOW_H
