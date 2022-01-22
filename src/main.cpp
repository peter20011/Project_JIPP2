//
// Created by PW on 21.01.2022.
//


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Account.h"
#include "Savings.h"
#include "Current.h"
using namespace  std;

int main()
{
    Account *a;
    int ch;
    cout<<"----MENU----\n1.Current Acc\n2.Savings Acc\n3.Exit\n";
    cout<<"Select account type: ";
    cin>>ch;
    switch(ch)
    {
        case 1: //Savings Accout
        {
            int ch;
            Current c;
            a=&c;
            a->getdata();
            while(1)
            {
                cout<<"\n\nCurrent Account Facilities\n";
                cout<<"--------------------------\n";
                cout<<"1.Create Accout\n2.Deposit Account\n3.Witdrawal\n";
                cout<<"4.Balance\n5.Full Account Details\n6.Exit\n";
                cout<<"Enter choice from menu to make transactions: \n";
                cin>>ch;
                switch(ch)
                {
                    case 1:
                        a->create_account();
                        break;
                    case 2:
                        a->deposit();
                        break;
                    case 3:
                        a->withdraw();
                        break;
                    case 4:
                        a->balance();
                        break;
                    case 5:
                        a->dispaly();
                        break;
                    case 6:
                        goto back;
                    default: cout<<"Invalid Input\n";
                }
            }
        }
        case 2: //Savings Accout
        {
            int ch;
            Savings s;
            a=&s;
            a->getdata();
            while(1)
            {
                cout<<"\n\nSavings Account Facilities\n";
                cout<<"--------------------------\n";
                cout<<"1.Create Accout\n2.Deposit Account\n3.Witdrawal\n";
                cout<<"4.Balance\n5.Full Account Details\n6.Exit\n";
                cout<<"Enter choice from menu to make transactions: \n";
                cin>>ch;
                switch(ch)
                {
                    case 1:
                        a->create_account();
                        break;
                    case 2:
                        a->deposit();
                        break;
                    case 3:
                        a->withdraw();
                        break;
                    case 4:
                        a->balance();
                        break;
                    case 5:
                        a->display();
                        break;
                    case 6:
                        goto back;
                    default: cout<<"Invalid Input\n";
                }
            }
        }
        case 3:
            exit(0);
        default: cout<<"Invalid Input\n";
    }
    system("pause");
}