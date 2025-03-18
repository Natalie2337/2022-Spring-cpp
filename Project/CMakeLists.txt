cmake_minimum_required(VERSION 3.1)
project(pro1)
find_package(OpenCV REQUIRED)

add_executable(pro1 pro.cpp)
target_link_libraries(pro1 ${OpenCV_LIBS})

