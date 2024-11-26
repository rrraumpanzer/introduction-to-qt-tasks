cmake_minimum_required(VERSION 3.5.0)
project(introduction-to-qt-tasks VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(introduction-to-qt-tasks.exe
    main.cpp
)

target_link_libraries(introduction-to-qt-tasks.exe Qt5::Widgets)

