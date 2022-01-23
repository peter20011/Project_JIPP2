//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_BANK_H
#define PROJECT_JIPP2_BANK_H

#include"Accounts.h"
#include"CurrentAccount.h"
#include"SavingAccount.h"
#include"Customer.h"
#include"Manager.h"
using namespace std;
class Bank
{
    Customer customers;
    Accounts* accountsC;
    Accounts* accountsS;
public:
    Bank();
    ~Bank();
    //Methods for current accounts
    void Add_Current_Account(int, string, int, int);
    int Get_Current_NoOfAccounts();
    void Delete_Current_Account(int);
    void getAll_current_Balance();
    //Methods for current accounts


    //Methods for saving accounts
    void Add_Saving_Account(int, string, int, int);
    int Get_Saving_NoOfAccounts();
    void Delete_Saving_Account(int);
    void getAll_saving_Balance();
    //Methods for saving accounts



    void AddCustomer(string, int);
    void DeleteCustomer(int);

    string GetCustomer_Name(int);
    // void driverProgram();
};

#endif //PROJECT_JIPP2_BANK_H
