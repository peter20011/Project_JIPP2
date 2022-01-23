//
// Created by PW on 23.01.2022.
//

#include "Help.h"
#include <limits>

void menu(){
    cout << "\t\t=====Simple Bank Management System=====";
    cout << "\n\t\tPress 1 to Create New Account";
    cout << "\n\t\tPress 2 to Deposit Funds";
    cout << "\n\t\tPress 3 to Withdraw Funds";
    cout << "\n\t\tPress 4 to Check Balance";
    cout << "\n\t\tPress 5 to View All Account Holder";
    cout << "\n\t\tPress 6 to Close an Account";
    cout << "\n\t\tPress 7 to Modify an Account";
    cout << "\n\t\tPress 8 to Exit the Program";
    cout << "\n\t\tOption: ";
}
long check() {
    long liczba;
    while(true)
    {
        cin >> liczba;
        if(cin.fail())
        {
            cout << "Error" << endl;
            cout<<"Try again"<<endl;
            cin.clear();
            cin.ignore(LONG_MAX,'\n');

        }
        else{
            break;
        }
    }


    return liczba;

}

int checks() {
    long liczba;
    while(true)
    {
        cin >> liczba;
        if(cin.fail())
        {
            cout << "Error" << endl;
            cout<<"Try again"<<endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');

        }
        else{
            break;
        }
    }


    return liczba;

}

