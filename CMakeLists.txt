cmake_minimum_required(VERSION 3.16)

project(Project_JIPP2)

include_directories(include)

add_executable(Project_JIPP2 src/main.cpp  include/Account.h src/Current.cpp include/Current.h include/Help_place.h src/Help_place.cpp src/Savings.cpp include/Savings.h)