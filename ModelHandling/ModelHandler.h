// ModelHandler.h
#ifndef MODELHANDLER_H
#define MODELHANDLER_H

#include <QString>
#include <QWidget>

// �ṩģ�ͼ��ؽӿ�
class ModelHandler {
public:
    ModelHandler();
    ~ModelHandler();

    // ����STLģ��
    bool loadSTLModel(const QString& filePath, QWidget* parentWidget);

    // ����STEPģ��
    bool loadSTEPModel(const QString& filePath, QWidget* parentWidget);

private:
    // STL �� STEP ������صľ���ʵ��
    bool loadSTL(const QString& filePath);
    bool loadSTEP(const QString& filePath);
};

#endif // MODELHANDLER_H
