#ifndef STEPCONTROL_READER_H
#define STEPCONTROL_READER_H

#include <QString>

class STEPControl_Reader {
public:
    STEPControl_Reader();  // ���캯��
    bool loadModel(const QString& fileName);  // ����ģ��
};

#endif // STEPCONTROL_READER_H
#pragma once
