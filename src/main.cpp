//
// Created by PW on 23.01.2022.
//

#include "Account.h"
#include "CurrentAcc.h"
#include "SavingsAcc.h"
#include "Help.h"
#include <string>
#include <cstdio>
#include "Taxes.h"

int main(int argc, char* argv[])
{
    if (argc >2 || argc ==1)
    {
        perror("Nie podano nazwy pliku lub za duza ilosc argumentow");
        exit(-1);
    }
    char* file_name[1];
    *file_name=argv[1];

    srand(time(0));
    char opt;
    int num;

    Account *a=new CurrentAcc();
    //Account *a=new SavingsAcc();
   while(true)
   {
        menu();
        cin >> opt;
        system("cls");
        switch (opt)
        {
            case '1':
                a->write_account(*file_name);
                break;
            case '2':
                cout << "\n\n\tEnter The account No. : ";
                num=check_s();
                a->deposit_withdraw(num, 1,*file_name);
                break;
            case '3':
                cout << "\n\n\tEnter The account No. : ";
                num=check_s();
                a->deposit_withdraw(num, 2,*file_name);
                break;
            case '4':
                cout << "\n\n\tEnter The account No. : ";
                num=check_s();
                a->display_sp(num,*file_name);
                break;
            case '5':
                a->display_all(*file_name);
                break;
            case '6':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->delete_account(num,*file_name);
                break;
            case '7':
                cout << "\n\n\tEnter The account No. : ";
                num=check();
                a->modify_account(num,*file_name);
                break;
            case '8':
                    void other();
                    break;
            case '9':
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