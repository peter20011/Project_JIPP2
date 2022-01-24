//
// Created by PW on 24.01.2022.
//

#include "Taxes.h"
#include "Help.h"
Taxes::Taxes()
{
    //  cout << "\nThe Taxes class started\n";
}

Taxes::~Taxes()
{
    // cout << "\nThe Taxes class Ended\n";
}

void Taxes::set_name(string name)
{
    this->name=name;
}

void Taxes::set_salary(double salary)
{
    this->salary=salary;
}

double Taxes::get_salary()
{
    return salary;
}

double Taxes::tex(double a)
{
    return 0.17*a;
}

double Taxes::tex(double m, double n)
{
    return (n+m)*0.17;
}

string Taxes::get_name()
{
    return name;
}



