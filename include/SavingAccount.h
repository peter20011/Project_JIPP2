//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_SAVINGACCOUNT_H
#define PROJECT_JIPP2_SAVINGACCOUNT_H

#include"Accounts.h"
#include <vector>
#include <iostream>
using namespace  std;
class SavingAccount :public Accounts
{
protected:
    vector<int> Account_ID_Saving;
    vector<string> AccountType_Saving;
    vector<int> Customer_ID_Saving;
    vector<int> Account_Balance_Saving;
public:
    SavingAccount();
    ~SavingAccount();
    void WithDraw(int);
    void Deposit(int, string, int, int);//Also can be named as add Account
    void Balance();
    void DeleteAccount(int);
    int getAccountsNumber();

};

#endif //PROJECT_JIPP2_SAVINGACCOUNT_H
