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
    void deposit_funds(double);
    void draw_funds(double);
    void get_report();
    int get_accountnumber();
    int get_funds();
    char get_accounttype();
    void write_account(char* file);
    void display_sp(int,char* file);
    void modify_account(int,char* file);
    void delete_account(int,char* file);
    void display_all(char* file);
    void deposit_withdraw(int, int,char* file);
     friend double check();
     friend  int check_s();

};


#endif //PROJECT_JIPP2_CURRENTACC_H
