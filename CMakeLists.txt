cmake_minimum_required(VERSION 3.5)
project(magic-enum-proj)

set(CMAKE_CXX_STANDARD 17)

find_package(magic_enum REQUIRED)

# ------------------------------
add_executable(
    enum-non-magic-demo
    enum-non-magic.cpp
)
target_link_libraries(enum-non-magic-demo
    magic_enum::magic_enum
)
# ------------------------------
add_executable(
    enum-magic-demo
    enum-magic.cpp
)
target_link_libraries( enum-magic-demo
    magic_enum::magic_enum
)
