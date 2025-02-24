cmake_minimum_required(VERSION 3.5)

# 设置项目名称
project(FlowStone2)

# 启用自动MOC和自动UIC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# 设置源文件
set(SOURCES
    MainWindow/FlowStone2-MainWindow.cpp
    ModelHandling/ModelHandler.cpp
    # 其他源文件
)

# 设置UI文件
set(FORMS
    MainWindow/FlowStone-MainWindow.ui
)

# 添加可执行文件
add_executable(${PROJECT_NAME} ${SOURCES} ${FORMS})

# 查找Qt库并链接
find_package(Qt5 REQUIRED Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
