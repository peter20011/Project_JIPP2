//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_SAVINGSACC_H
#define PROJECT_JIPP2_SAVINGSACC_H
#include <Account.h>
#include <string>
#include "Help.h"
class SavingsAcc : public Account{
public:
    SavingsAcc();
    ~SavingsAcc();
    void create_account();
    void show_account();
    void modify_account();
    void deposit_funds(int);
    void draw_funds(int);
    void get_report();
    int get_accountnumber();
    int get_funds();
    char get_accounttype();
    void write_account();
    void display_sp(int);
    void modify_account(int);
    void delete_account(int);
    void display_all();
    void deposit_withdraw(int, int);
    friend  int check();
};


#endif //PROJECT_JIPP2_SAVINGSACC_H
