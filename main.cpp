#include <QApplication>
#include <QDebug>  // ���QDebugͷ�ļ�
#include "MainWindow/FlowStone2-MainWindow.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    qDebug() << "Application started";  // ���������Ϣ

    FlowStone2MainWindow w;
    w.show();

    return a.exec();
}
