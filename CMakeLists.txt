cmake_minimum_required(VERSION 3.10)

project(Calculator)

set(CMALE_CXX_STANDARD 17)

add_executable(main main.cpp calc.cpp)

add_executable(tests test.cpp calc.cpp)
