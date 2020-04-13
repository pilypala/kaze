set(PROJECT kaze)

project(${PROJECT} LANGUAGES CXX)

add_executable(${PROJECT} main.cpp)
target_link_libraries(${PROJECT}
    Qt5::Core
    Qt5::Qml
    Qt5::Quick
    )