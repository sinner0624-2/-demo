#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FlowStone100.h"

class FlowStone100 : public QMainWindow
{
    Q_OBJECT

public:
    FlowStone100(QWidget *parent = nullptr);
    ~FlowStone100();

private:
    Ui::FlowStone100Class ui;
};
