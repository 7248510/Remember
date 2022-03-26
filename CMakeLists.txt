cmake_minimum_required(VERSION 3.20)
project(Remember)

set(CMAKE_CXX_STANDARD 14)
include_directories(fmt/include/)
add_executable(Remember main.cpp remember.cpp remember.h errorCodes.cpp errorCodes.h libraries.h operations.cpp operations.h)
