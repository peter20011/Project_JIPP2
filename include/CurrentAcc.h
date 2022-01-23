//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_CURRENTACC_H
#define PROJECT_JIPP2_CURRENTACC_H
#include <Account.h>

class CurrentAcc:public Account {
public:
    CurrentAcc();
    ~CurrentAcc();
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


};


#endif //PROJECT_JIPP2_CURRENTACC_H
