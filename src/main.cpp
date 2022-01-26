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
#include <iomanip>

/*
* Szablon dla roznicy funkcji dowolnych typow
* @parm a przechowuje wartosc wprzekazana do funkcji
* @parm b przechowuje wartosc wprzekazana do funkcji
*/

template <class T>
T difference(T a, T b)
{
    return a-b;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(int argc, char* argv[])
{
    if (argc >2 || argc ==1)
    {
        perror("File name not specified or too many arguments \"");
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
                num=check_s();
                a->delete_account(num,*file_name);
                break;
            case '7':
                cout << "\n\n\tEnter The account No. : ";
                num=check_s();
                a->modify_account(num,*file_name);
                break;
            case '8':
                for(int i=0;i<1;i++){
                                Taxes dad;
                                Taxes mum;
                                double n;
                                for(int w=0;w<2;w++)
                                {
                                    if (w==0)
                                    {
                                        cout<<"Give your name:\n";
                                        string a;
                                        cin>>a;
                                        dad.set_name(a);
                                        cout<<"Enter your salary:\n";
                                        n=check();
                                        while(n<0)
                                        {
                                            cout<<"Error\n";
                                            cout<<"Try again\n";
                                            n=check();
                                        }
                                        dad.set_salary(n);
                                        while(true)
                                        {
                                            cout<<"Do you have additional sources of income:\n";
                                            cout<<"Choose 1- yes, 2-no\n";
                                            int choice;
                                            cin>>choice;
                                            if(choice==1){
                                                cout<<"Enter your income rate\n";
                                                double m;
                                                m=check();
                                                while(m<0)
                                                {
                                                    cout<<"Error\n";
                                                    cout<<"Try again\n";
                                                    m=check();
                                                }
                                                dad.income.push_back(m);
                                                continue;
                                            }
                                             else if(choice==2){
                                                break;
                                            }
                                            else
                                            {
                                                cout<<"Error\n";
                                                cout<<"Try again\n";
                                                continue;
                                            }
                                        }
                                    }

                                    if (w==1)
                                    {
                                        cout<<"Give your name:\n";
                                        string g;
                                        cin>>g;
                                        mum.set_name(g);
                                        cout<<"Enter your salary:";
                                        n=check();
                                        while(n<0)
                                        {
                                            cout<<"Error";
                                            cout<<"Try again";
                                            n=check();
                                        }
                                        mum.set_salary(n);
                                        while(true)
                                        {
                                            cout<<"Do you have additional sources of income:\n";
                                            cout<<"Choose 1- yes, 2-no\n";
                                            int choice;
                                            cin>>choice;
                                            if(choice==1){
                                                cout<<"Enter your income rate:\n";
                                                double v;
                                                v=check();
                                                while(v<0)
                                                {
                                                    cout<<"Error\n";
                                                    cout<<"Try again\n";
                                                    v=check();
                                                }
                                                mum.income.push_back(v);
                                                continue;
                                            }
                                            else if(choice==2){
                                                break;
                                            }
                                            else
                                            {
                                                cout<<"Error\n";
                                                cout<<"Try again\n";
                                                continue;
                                            }
                                        }
                                    }
                                }
                                Taxes w;
                                w=dad+mum;
                                cout<<"Joint income from salary is: "<<w.get_salary()<<"\n";

                                double o;
                                if(dad.get_salary()>mum.get_salary()) {
                                    o = difference<double>(dad.get_salary(), mum.get_salary());
                                    cout << "The difference between the salaries is: " << fixed<<setprecision(2)<<o << endl;
                                }
                                else
                                {
                                    o= difference<double>(mum.get_salary(),dad.get_salary());
                                    cout<<  "The difference between the salaries is: " <<fixed<<setprecision(2)<< o << endl;
                                }
                                cout<<"Tax paid by  "<<dad.get_name()<<" is equal "<< fixed<<setprecision(2)<<dad.tex(dad.get_salary())<<endl;
                                cout<<"Tax paid by  "<<mum.get_name()<<" is equal "<< fixed<<setprecision(2)<<mum.tex(mum.get_salary())<<endl;
                                cout<<"Tax Paid jointly :"<<fixed<<setprecision(2)<<w.tex(dad.get_salary(),mum.get_salary())<<endl;
                                double sum_dad=0;
                                for(auto &j :dad.income)
                                {
                                    sum_dad+=j;
                                }

                                double sum_mum=0;
                                for(auto &l : mum.income)
                                {

                                    sum_mum+=l;

                                }
                                cout<<"Income from other sources is: "<< setprecision(2)<<sum_dad<<endl<<" for "<<dad.get_name()<<endl;
                                cout<<"Income from other sources is: "<< setprecision(2)<<sum_mum<<endl<<" for "<<mum.get_name()<<endl;
                                }
                                break;

            case '9':
                cout << "\n\n\tThanks for using Simple Bank Management System";
                break;
            default:
                cout << "Invalid Option\n";
        }
        cin.ignore();
        cin.get();
        if (opt == '9')
            break;
    }
    return 0;
}