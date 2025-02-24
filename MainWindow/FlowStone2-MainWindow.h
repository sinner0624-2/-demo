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
    void on_pushButton_clicked();  // ��ť����ۺ���
    void on_actionExit_triggered();  // �˳��ۺ���
    void on_actionOpenFile_triggered();  // ���ļ��ۺ���
    void openFile();

private:
    Ui::MainWindow* ui;
    bool isFileDialogOpen;  // �ļ��Ի���״̬���� 
    bool isProcessing = false;  
};

#endif // FLOWSTONE2_MAINWINDOW_H
