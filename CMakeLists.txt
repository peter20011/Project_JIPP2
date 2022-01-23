cmake_minimum_required(VERSION 3.16)

project(Project_JIPP2)

include_directories(include)

add_executable(Project_JIPP2 src/Account.cpp include/Account.h CurrentAcc.cpp include/CurrentAcc.h SavingsAcc.cpp include/SavingsAcc.h src/main.cpp Help.cpp include/Help.h)