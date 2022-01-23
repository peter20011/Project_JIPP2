cmake_minimum_required(VERSION 3.16)

project(Project_JIPP2)

include_directories(include)

add_executable(Project_JIPP2 include/Accounts.h include/Bank.h include/CurrentAccount.h include/Customer.h include/Manager.h include/Person.h include/SavingAccount.h src/main.cpp src/Accounts.cpp src/CurrentAccount.cpp src/Customer.cpp src/Manager.cpp src/Person.cpp src/SavingAccount.cpp src/Bank.cpp)