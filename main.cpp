#include <QApplication>
#include <QDebug>  // 添加QDebug头文件
#include "MainWindow/FlowStone2-MainWindow.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    qDebug() << "Application started";  // 输出调试信息

    FlowStone2MainWindow w;
    w.show();

    return a.exec();
}
