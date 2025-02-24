// ModelHandler.h
#ifndef MODELHANDLER_H
#define MODELHANDLER_H

#include <QString>
#include <QWidget>

// 提供模型加载接口
class ModelHandler {
public:
    ModelHandler();
    ~ModelHandler();

    // 加载STL模型
    bool loadSTLModel(const QString& filePath, QWidget* parentWidget);

    // 加载STEP模型
    bool loadSTEPModel(const QString& filePath, QWidget* parentWidget);

private:
    // STL 和 STEP 加载相关的具体实现
    bool loadSTL(const QString& filePath);
    bool loadSTEP(const QString& filePath);
};

#endif // MODELHANDLER_H
