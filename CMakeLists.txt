cmake_minimum_required(VERSION 3.5)
project(magic-enum-proj)

set(CMAKE_CXX_STANDARD 17)

# ------------------------------
add_executable(
    enum-non-magic-demo
    enum-non-magic.cpp
)

# ------------------------------
add_executable(
    enum-magic-demo
    enum-magic.cpp
)
