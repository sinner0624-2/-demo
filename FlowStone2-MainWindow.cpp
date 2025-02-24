// FlowStone2-MainWindow.cpp
#include "FlowStone2-MainWindow.h"
#include "ModelHandler.h"
#include <QFileDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

FlowStone2MainWindow::FlowStone2MainWindow(QWidget* parent)
    : QMainWindow(parent) {

    // 创建UI控件
    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    QVBoxLayout* layout = new QVBoxLayout(centralWidget);

    QPushButton* loadButton = new QPushButton("Load Model", this);
    layout->addWidget(loadButton);

    connect(loadButton, &QPushButton::clicked, this, &FlowStone2MainWindow::onLoadModelClicked);
}

// 文件加载槽函数
void FlowStone2MainWindow::onLoadModelClicked() {
    // 选择文件
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
        // 不支持的文件格式
        QMessageBox::warning(this, "Error", "Unsupported file format.");
    }
}
