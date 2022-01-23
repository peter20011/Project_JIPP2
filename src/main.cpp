//
// Created by PW on 23.01.2022.
//

#include "Account.h"
#include "CurrentAcc.h"
#include "SavingsAcc.h"
#include "Help.h"
#include <string>


int main(int argc, char* argv[])
{   char file_name[30];
    file_name==argv[1];
    srand(time(0));
    char opt;
    int num;
    num=check();
   while(true)
   {
        menu();
        cin >> opt;
        system("cls");
        Account *a=new SavingsAcc();
        switch (opt)
        {
            case '1':
                a->write_account();
                break;
            case '2':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->deposit_withdraw(num, 1);
                break;
            case '3':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->deposit_withdraw(num, 2);
                break;
            case '4':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->display_sp(num);
                break;
            case '5':
                a->display_all();
                break;
            case '6':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->delete_account(num);
                break;
            case '7':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->modify_account(num);
                break;
            case '8':
                cout << "\n\n\tThanks for using Simple Bank Management System";
                break;
            default:
                cout << "Invalid Option\n";
        }
        cin.ignore();
        cin.get();
        if (opt == '8')
            break;
    }
    return 0;
}