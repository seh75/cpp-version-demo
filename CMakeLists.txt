# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称和版本号
project(cpp_version_demo VERSION 1.0)

# 设置 C++ 标准（可选）
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加 main.cpp 作为可执行文件
add_executable(cpp_version_demo main.cpp)
