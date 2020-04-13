cmake_minimum_required(VERSION 3.8)
project(KazeSolution)

# set(CMAKE_PREFIX_PATH "C:/Qt/Qt5.12.7/5.12.7/msvc2017/lib/cmake")

# 3rd party tools
find_package(Qt5 COMPONENTS Core Qml Quick REQUIRED)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Directory with source code
add_subdirectory(src)