//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_ACCOUNTS_H
#define PROJECT_JIPP2_ACCOUNTS_H

#include<iostream>
#include<string>
#include <vector>
using namespace std;
class Accounts{
public:
    Accounts();
    ~Accounts();
    virtual void WithDraw(int) = 0;
    virtual void Deposit(int, string, int, int) = 0;
    virtual void Balance() =0;
    virtual void DeleteAccount(int)=0;
    virtual int getAccountsNumber()=0;
};

#endif //PROJECT_JIPP2_ACCOUNTS_H

