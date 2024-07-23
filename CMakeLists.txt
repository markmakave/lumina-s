cmake_minimum_required(VERSION 3.20)

project(lumina-s)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(lumina
    src/main.cpp
)
target_compile_options(lumina PRIVATE -Wall -fconstexpr-ops-limit=10000000000000)
