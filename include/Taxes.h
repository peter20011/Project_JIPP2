//
// Created by PW on 24.01.2022.
//

#ifndef PROJECT_JIPP2_TAXES_H
#define PROJECT_JIPP2_TAXES_H
#include <iostream>
#include <vector>
#include <string>
#include "Help.h"
using namespace std;
class Taxes {
string name;
double salary;
public:
    vector<double>income;
    Taxes();
    ~Taxes();
    void set_name(string name);
    void set_salary(double salary);
    double get_salary();
    double tex(double a);
    double tex(double m, double n);
    string get_name();
    Taxes operator+(Taxes &obj)
    {
        Taxes wynik;
        wynik.salary=salary+obj.salary;
        return wynik;
    };


};



#endif //PROJECT_JIPP2_TAXES_H
