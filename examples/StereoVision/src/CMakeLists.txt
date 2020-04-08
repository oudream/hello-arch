cmake_minimum_required(VERSION 3.5)

project(StereoVision)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(common)


add_executable(test main.cpp)
target_link_libraries(test common)