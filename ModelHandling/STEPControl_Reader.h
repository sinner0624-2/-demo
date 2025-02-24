#ifndef STEPCONTROL_READER_H
#define STEPCONTROL_READER_H

#include <QString>

class STEPControl_Reader {
public:
    STEPControl_Reader();  // 构造函数
    bool loadModel(const QString& fileName);  // 加载模型
};

#endif // STEPCONTROL_READER_H
#pragma once
