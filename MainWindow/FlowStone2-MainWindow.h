#ifndef FLOWSTONE2_MAINWINDOW_H
#define FLOWSTONE2_MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QCoreApplication>

namespace Ui {
    class MainWindow;
}

class FlowStone2MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlowStone2MainWindow(QWidget* parent = nullptr);
    ~FlowStone2MainWindow();

private slots:
    void on_pushButton_clicked();  // 按钮点击槽函数
    void on_actionExit_triggered();  // 退出槽函数
    void on_actionOpenFile_triggered();  // 打开文件槽函数
    void openFile();

private:
    Ui::MainWindow* ui;
    bool isFileDialogOpen;  // 文件对话框状态变量 
    bool isProcessing = false;  
};

#endif // FLOWSTONE2_MAINWINDOW_H
