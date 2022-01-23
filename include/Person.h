//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_PERSON_H
#define PROJECT_JIPP2_PERSON_H

#include<iostream>
#include <vector>
using namespace std;
class Person
{
protected:
    vector<string> Name;
    vector<int> ID;
    vector<string> Branch;

public:
    Person();
    ~Person();
};

#endif //PROJECT_JIPP2_PERSON_H
