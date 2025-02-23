/********************************************************************************
** Form generated from reading UI file 'FlowStone100.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWSTONE100_H
#define UI_FLOWSTONE100_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlowStone100Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FlowStone100Class)
    {
        if (FlowStone100Class->objectName().isEmpty())
            FlowStone100Class->setObjectName(QString::fromUtf8("FlowStone100Class"));
        FlowStone100Class->resize(600, 400);
        menuBar = new QMenuBar(FlowStone100Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        FlowStone100Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FlowStone100Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FlowStone100Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(FlowStone100Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        FlowStone100Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FlowStone100Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FlowStone100Class->setStatusBar(statusBar);

        retranslateUi(FlowStone100Class);

        QMetaObject::connectSlotsByName(FlowStone100Class);
    } // setupUi

    void retranslateUi(QMainWindow *FlowStone100Class)
    {
        FlowStone100Class->setWindowTitle(QApplication::translate("FlowStone100Class", "FlowStone100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlowStone100Class: public Ui_FlowStone100Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWSTONE100_H
