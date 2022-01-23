//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_CURRENTACCOUNT_H
#define PROJECT_JIPP2_CURRENTACCOUNT_H

#include"Accounts.h"
#include <vector>
class CurrentAccount: public Accounts
{
protected:
    vector<int> Account_ID_Current;
    vector<string> AccountType_Current;
    vector<int> Customer_ID_Current;
    vector<int> Account_Balance_Current;
public:
    CurrentAccount();
    ~CurrentAccount();
    void WithDraw(int);
    void Deposit(int, string, int, int);//Also can be named as add Account
    void Balance();
    void DeleteAccount(int);
    int getAccountsNumber();

};


#endif //PROJECT_JIPP2_CURRENTACCOUNT_H
