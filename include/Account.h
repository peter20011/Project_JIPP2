//
// Created by PW on 22.01.2022.
//

#ifndef PROJECT_JIPP2_ACCOUNT_H
#define PROJECT_JIPP2_ACCOUNT_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace  std;
class Account {
protected:
    int account_number;
    string name_customer;
    int acc_number;
    char account_type[20];
public:
    virtual void create_account()=0;
    virtual void deposit()=0;
    virtual void display()=0;
    virtual void  withdraw()=0;
    virtual void  getdata()=0;
    virtual void intrest()=0;
    virtual void balance()=0;
};


#endif //PROJECT_JIPP2_ACCOUNT_H
