#ifndef STLCONTROL_READER_H
#define STLCONTROL_READER_H

#include <QString>

class STLControl_Reader {
public:
    STLControl_Reader();  // ���캯��
    bool loadModel(const QString& fileName);  // ����ģ��
};

#endif // STLCONTROL_READER_H
#pragma once
