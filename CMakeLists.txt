cmake_minimum_required(VERSION 3.19)
project(Order C)

set(CMAKE_C_STANDARD 99)

add_executable(Order main.c gcd.c gcd.h modpow.c modpow.h)
target_link_libraries(Order m)