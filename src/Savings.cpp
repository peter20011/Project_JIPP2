//
// Created by PW on 22.01.2022.
//

#include "Savings.h"
#include "Account.h"
#include <cstringt.h>
Savings::Savings()
{
    strcpy(account_type,"Savings Account.");
    account_number=000;
    SI=bal=amt=initial_amt=0.0;
    intr=00.45;
    n=2;
};

void Savings::getdata()
{
        cout<<"\nPodaj imie klienta: ";
        cin>>name_customer;
        cout<<"\nTwoj numer konata to: ";
        x= gen_acc_num();
        cout<<setw(3)<<setfill('0')<< x <<endl;
}

void Savings::create_account()
{
    cout<<"\nNowe konto \n";
    cout<<"Podaj liczbe lat przez ktore srodki beda przebywac w depozycie: ";
    cin>>years;
    retry:
    cout<<"\n Wczytaj kwote jako chcesz zdeponowac: ";
    cin>>amt;
    if(amt<500)
    {
        cout<<"Minimialny depozyt to: 500\nSprobuj ponownie\n";
        goto retry;
    } else
        bal = amt;
    initial_amt=amt;
}

void Savings::display()
{
    cout<<"----Pele infomacje----\n";
    cout<<"Imie klienta: "<<"\t"<<name_customer<<endl;
    cout<<"Numer konta: "<<"\t"<<setw(3)<<setfill('0')<<x<<endl;
    cout<<"Typ konta: "<<"\t"<<account_type<<endl;
    cout<<"------------------------\n";
    cout<<"Rachunek: "<<"\t"<<bal<<endl;
    intrest();
    cout<<"Odsetki: "<<SI;
}

void Savings::deposit()
{
    cout<<"Podaj numer konta .\n";
    cin>>dummy;
    if(x==dummy)
    {
        cout<<"Podaj kwote jaka chesz zdeponowac\n";
        cin>>amt;
        bal +=amt;
    }else
        cout<<"Zlodziej!! Poinformujemy o tym policje\n";

}

void Savings::withdraw()
{
    cout<<"Enter Account no.\n";
    cin>>dummy;
    if(x==dummy)
    {
        cout<<"Podaj kwote jaka chcesz wyplacic.\n";
        cin>>c_no;
        cout<<"\nWpisz kwote do wpyplaty: ";
        cin>>amt;
        if(bal <= 500)
            cout<<"Wypłata nie jest możliwa. Osiągnięto minimalne saldo\n";
        else
            bal = bal - amt;
    }else
        cout<<"Haker! Poinformowaliśmy Policję o tym incydencie\n";
}

void Savings::intrest()
{
    SI=initial_amt*(pow((1+intr/n),(n*years)));
}

void Savings::balance()
{
    cout<<"\nAktualne saldo\n"<<bal<<endl;
}