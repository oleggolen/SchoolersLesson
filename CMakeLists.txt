cmake_minimum_required(VERSION 3.19)
project(SchoolersLesson)

set(CMAKE_CXX_STANDARD 14)

add_executable(SchoolersLesson main.cpp Schoolers/Schooler.cpp Schoolers/Schooler.h Schoolers/PrimarySchooler.cpp Schoolers/PrimarySchooler.h Schoolers/MiddleSchooler.cpp Schoolers/MiddleSchooler.h Schoolers/HighSchooler.cpp Schoolers/HighSchooler.h)