cmake_minimum_required(VERSION 3.12)
project(CodeInter)
include_directories(".")
file(GLOB SOURCES "*.cpp")
add_executable(CodeInter ${SOURCES})