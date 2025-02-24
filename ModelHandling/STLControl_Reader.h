#ifndef STLCONTROL_READER_H
#define STLCONTROL_READER_H

#include <QString>

class STLControl_Reader {
public:
    STLControl_Reader();  // 构造函数
    bool loadModel(const QString& fileName);  // 加载模型
};

#endif // STLCONTROL_READER_H
#pragma once
