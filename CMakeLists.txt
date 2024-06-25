cmake_minimum_required(VERSION 3.12.0)
project(ModernCppProject DESCRIPTION "Final Project for Modern C++ for Computer Vision SoSe2024"
                         LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Release)

find_package(Eigen3 REQUIRED)
find_package(Open3D REQUIRED)

add_subdirectory(${PROJECT_SOURCE_DIR}/dataloader)
add_subdirectory(${PROJECT_SOURCE_DIR}/viewer)
