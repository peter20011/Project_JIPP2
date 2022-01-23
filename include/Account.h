//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_ACCOUNT_H
#define PROJECT_JIPP2_ACCOUNT_H
#include <iostream>
using namespace std;
class Account {
protected:
    int accountnumber ;
    char name[50];
    int deposit;
    char type;
public:
    Account();
    ~Account();
    virtual void  create_account()=0;
    virtual void  show_account()=0;
    virtual void   modify_account()=0;
    virtual void   deposit_funds(int)=0;
    virtual void  draw_funds(int)=0;
    virtual void   get_report()=0;
    virtual int   get_accountnumber()=0;
    virtual int   get_funds()=0;
    virtual char   get_accounttype()=0;
    virtual void  write_account()=0;
    virtual void   display_sp(int)=0;
    virtual void  modify_account(int)=0;
    virtual void   delete_account(int)=0;
    virtual void   display_all()=0;
    virtual void   deposit_withdraw(int, int)=0;
};


#endif //PROJECT_JIPP2_ACCOUNT_H
