//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_CUSTOMER_H
#define PROJECT_JIPP2_CUSTOMER_H
#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
using namespace std;
class Customer:protected Person
{
public:
    Customer();
    void AddCustomer(string, int);
    void PrintAllCustomersData();
    void DeleteCustomer(int);
    void Print_CustomerDetails(int);
    string getCustomerName(int);
};

#endif //PROJECT_JIPP2_CUSTOMER_H
