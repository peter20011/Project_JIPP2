//
// Created by PW on 23.01.2022.
//
#include "Bank.h"

Bank::Bank()
{
    accountsC = new CurrentAccount();
    accountsS = new SavingAccount();
    cout << "\nThe program is in the bank class\n";
}

//Current Account
void Bank::Add_Current_Account(int AID, string AT, int CID, int AB)
{
    accountsC->Deposit(AID, AT, CID, AB);
}
void Bank::Delete_Current_Account(int index)
{
    accountsC->DeleteAccount(index);
}
int Bank::Get_Current_NoOfAccounts()
{
    int num = accountsC->getAccountsNumber();
    return num;
}
void Bank::getAll_current_Balance()
{
    accountsC->Balance();
}
//Current Account

//Saving Account
void Bank::getAll_saving_Balance()
{
    accountsS->Balance();
}
void Bank::Add_Saving_Account(int AID, string AT, int CID, int AB)
{
    accountsS->Deposit(AID, AT, CID, AB);
}
void Bank::Delete_Saving_Account(int index)
{
    accountsS->DeleteAccount(index);
}
int Bank::Get_Saving_NoOfAccounts()
{
    int num = accountsS->getAccountsNumber();
    return num;
}
//Saving Account


void Bank::AddCustomer(string name, int ID)
{
    customers.AddCustomer(name, ID);
}
void Bank::DeleteCustomer(int index)
{
    customers.DeleteCustomer(index);
}

string Bank::GetCustomer_Name(int index)
{
    string name = customers.getCustomerName(index);
    return name;
}


Bank::~Bank()
{
    cout << "\nThe Bank class ended \n";
    delete accountsC;
    accountsC = nullptr;
    delete accountsS;
    accountsS = nullptr;
}
