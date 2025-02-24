#include "MainWindow/FlowStone2-MainWindow.h"
#include "UI/ui_FlowStone2-MainWindow.h"
#include <QFileDialog>
#include <QCoreApplication>
#include <QDebug>
#include <QTimer>


FlowStone2MainWindow::FlowStone2MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // ���� UI
    ui->pushButton->setIcon(QIcon(":UI/icon/OpenFile.png"));



    qDebug() << "Icon path: " << ":UI/icon/OpenFile.png";
    QIcon icon(":UI/icon/OpenFile.png");
    if (icon.isNull()) {
        qDebug() << "Failed to load the icon!";
    }
    else {
        qDebug() << "Icon loaded successfully!";
    }


    // ���Ӱ�ť����źŵ��ۺ���
    connect(ui->pushButton, &QPushButton::clicked, this, &FlowStone2MainWindow::on_pushButton_clicked);
    // �����˳�����Ķ������ۺ���
    connect(ui->actionactionExit, &QAction::triggered, this, &FlowStone2MainWindow::on_actionExit_triggered);
    // ���Ӳ˵����ļ����źŵ��ۺ���
    connect(ui->actionOpenFile, &QAction::triggered, this, &FlowStone2MainWindow::on_actionOpenFile_triggered);
}

FlowStone2MainWindow::~FlowStone2MainWindow()
{
    delete ui;  // ɾ�� UI ָ�룬��ֹ�ڴ�й©
}

// �˳�����Ĳۺ���
void FlowStone2MainWindow::on_actionExit_triggered()
{
    qDebug() << "�˳�����";  // ��ӡ�˳���Ϣ������̨
    QCoreApplication::quit();  // �˳�Ӧ�ó���
}

// ���ļ��Ĳۺ���
void FlowStone2MainWindow::on_actionOpenFile_triggered()
{
    openFile();  // ������ȡ����ͨ�ú���
}

// ��ť����Ĳۺ���
void FlowStone2MainWindow::on_pushButton_clicked()
{
    openFile();  // ������ȡ����ͨ�ú���
}

// ��ȡͨ�õ��ļ��򿪺���
void FlowStone2MainWindow::openFile()
{
    if (!isProcessing) {
        isProcessing = true;  // ���Ϊ���ڴ���

        // ���ð�ť
        ui->pushButton->setEnabled(false);
        ui->actionOpenFile->setEnabled(false);

        // �첽��ʽ�ӳٸ��� isProcessing ״̬
        QTimer::singleShot(1000, this, [this]() {
            // ִ���ļ��Ի������
            QString filePath = QFileDialog::getOpenFileName(this, tr("��ģ���ļ�"), "", tr("ģ���ļ� (*.stl *.step)"));
            if (!filePath.isEmpty()) {
                qDebug() << "ѡ�е��ļ�·��: " << filePath;
            }
            else {
                qDebug() << "�û�ȡ�����ļ�ѡ��";
            }

            // �ļ�ѡ����Ϻ����ð�ť
            ui->pushButton->setEnabled(true);
            ui->actionOpenFile->setEnabled(true);

            // �������
            isProcessing = false;
            });
    }
}
