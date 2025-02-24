#include "MainWindow/FlowStone2-MainWindow.h"
#include "UI/ui_FlowStone2-MainWindow.h"
#include <QFileDialog>
#include <QCoreApplication>
#include <QDebug>
#include <QTimer>


FlowStone2MainWindow::FlowStone2MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // 设置 UI
    ui->pushButton->setIcon(QIcon(":UI/icon/OpenFile.png"));



    qDebug() << "Icon path: " << ":UI/icon/OpenFile.png";
    QIcon icon(":UI/icon/OpenFile.png");
    if (icon.isNull()) {
        qDebug() << "Failed to load the icon!";
    }
    else {
        qDebug() << "Icon loaded successfully!";
    }


    // 连接按钮点击信号到槽函数
    connect(ui->pushButton, &QPushButton::clicked, this, &FlowStone2MainWindow::on_pushButton_clicked);
    // 连接退出程序的动作到槽函数
    connect(ui->actionactionExit, &QAction::triggered, this, &FlowStone2MainWindow::on_actionExit_triggered);
    // 连接菜单打开文件的信号到槽函数
    connect(ui->actionOpenFile, &QAction::triggered, this, &FlowStone2MainWindow::on_actionOpenFile_triggered);
}

FlowStone2MainWindow::~FlowStone2MainWindow()
{
    delete ui;  // 删除 UI 指针，防止内存泄漏
}

// 退出程序的槽函数
void FlowStone2MainWindow::on_actionExit_triggered()
{
    qDebug() << "退出程序";  // 打印退出信息到控制台
    QCoreApplication::quit();  // 退出应用程序
}

// 打开文件的槽函数
void FlowStone2MainWindow::on_actionOpenFile_triggered()
{
    openFile();  // 调用提取出的通用函数
}

// 按钮点击的槽函数
void FlowStone2MainWindow::on_pushButton_clicked()
{
    openFile();  // 调用提取出的通用函数
}

// 提取通用的文件打开函数
void FlowStone2MainWindow::openFile()
{
    if (!isProcessing) {
        isProcessing = true;  // 标记为正在处理

        // 禁用按钮
        ui->pushButton->setEnabled(false);
        ui->actionOpenFile->setEnabled(false);

        // 异步方式延迟更新 isProcessing 状态
        QTimer::singleShot(1000, this, [this]() {
            // 执行文件对话框操作
            QString filePath = QFileDialog::getOpenFileName(this, tr("打开模型文件"), "", tr("模型文件 (*.stl *.step)"));
            if (!filePath.isEmpty()) {
                qDebug() << "选中的文件路径: " << filePath;
            }
            else {
                qDebug() << "用户取消了文件选择";
            }

            // 文件选择完毕后启用按钮
            ui->pushButton->setEnabled(true);
            ui->actionOpenFile->setEnabled(true);

            // 处理完成
            isProcessing = false;
            });
    }
}
