//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_MANAGER_H
#define PROJECT_JIPP2_MANAGER_H
#include"Person.h"
class Manager:protected Person
{

public:
    void Print_ManagerDetails();
    void TakeManagersData(string, string, int);
};

#endif //PROJECT_JIPP2_MANAGER_H
