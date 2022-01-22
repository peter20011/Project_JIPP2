//
// Created by PW on 22.01.2022.
//

#ifndef PROJECT_JIPP2_SAVINGS_H
#define PROJECT_JIPP2_SAVINGS_H
#include "Account.h"
#include "Help_place.h"
using namespace  std;
class Savings :public Account{
private:
    double bal,initial_amt,amt,intr,SI;
    int  num,dummy,years,n,c_no,x;
public:
    Savings();
    void  getdata();
    void  display();
    void create_account();
    void  deposit();
    void  withdraw();
    void  intrest();
    void balance();
};


#endif //PROJECT_JIPP2_SAVINGS_H
