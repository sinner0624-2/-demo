// FlowStone2-MainWindow.cpp
#include "FlowStone2-MainWindow.h"
#include "ModelHandler.h"
#include <QFileDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

FlowStone2MainWindow::FlowStone2MainWindow(QWidget* parent)
    : QMainWindow(parent) {

    // ����UI�ؼ�
    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    QVBoxLayout* layout = new QVBoxLayout(centralWidget);

    QPushButton* loadButton = new QPushButton("Load Model", this);
    layout->addWidget(loadButton);

    connect(loadButton, &QPushButton::clicked, this, &FlowStone2MainWindow::onLoadModelClicked);
}

// �ļ����زۺ���
void FlowStone2MainWindow::onLoadModelClicked() {
    // ѡ���ļ�
    QString filePath = QFileDialog::getOpenFileName(this, "Open Model", "", "STL Files (*.stl);;STEP Files (*.step)");
    if (filePath.isEmpty()) {
        return;
    }

    ModelHandler modelHandler;
    if (filePath.endsWith(".stl", Qt::CaseInsensitive)) {
        modelHandler.loadSTLModel(filePath, this);
    }
    else if (filePath.endsWith(".step", Qt::CaseInsensitive)) {
        modelHandler.loadSTEPModel(filePath, this);
    }
    else {
        // ��֧�ֵ��ļ���ʽ
        QMessageBox::warning(this, "Error", "Unsupported file format.");
    }
}
