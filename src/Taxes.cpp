//
// Created by PW on 24.01.2022.
//

#include "Taxes.h"

Taxes::Taxes()
{
    //  cout << "\nThe Taxes class started\n";
}

Taxes::~Taxes()
{
    // cout << "\nThe Taxes class Ended\n";
}

void Taxes::set_name(string name)
{
    this->name=name;
}

void Taxes::set_salary(double salary)
{
    this->salary=salary;
}

double Taxes::get_salary()
{
    return salary;
}

double Taxes::tex(double a)
{
    return 0.17*a;
}

double Taxes::tex(double m, double n)
{
    return (n+m)*0.17;
}

string Taxes::get_name()
{
    return name;
}

template <class T>
T difference(T a, T b)
{
    return a-b;
}

void other()
{
    Taxes dad;
    Taxes mum;
    double n;
    for(int i=0;i<2;i++)
    {
        if (i==0)
        {

            cout<<"Podaj swoja pensje:\n";
            cin>>n;
            dad.set_salary(n);
            cout<<"Podaj swoje imie:\n";
            string a;
            cin>>a;
            dad.set_name(a);
            while(true)
            {
                cout<<"Czy masz dodakowe zrodla dochodu:\n";
                cout<<"Wybierz 1- tak, 2-nie\n";
                int choice;
                cin>>choice;
                if(choice==1){
                    cout<<"Wprowadz stawke dochodu:\n";
                    double m;
                    cin>>m;
                    dad.income.push_back(m);
                    continue;
                }
                if(choice==2){
                    break;
                }
            }
        }

        if (i==1)
        {
            cout<<"Podaj swoja pensje:";
            cin>>n;
            mum.set_salary(n);
            cout<<"Podaj swoje imie:\n";
            string a;
            cin>>a;
            mum.set_name(a);
            while(true)
            {
                cout<<"Czy masz dodakowe zrodla dochodu:\n";
                cout<<"Wybierz 1- tak, 2-nie\n";
                int choice;
                cin>>choice;
                if(choice==1){
                    cout<<"Wprowadz stawke dochodu:\n";
                    double v;
                    cin>>v;
                    dad.income.push_back(v);
                    continue;
                }
                if(choice==2){
                    break;
                }
            }
        }
    }
    Taxes w;
    w=dad+mum;
    cout<<"Wspolny dochod z pensji to: "<<w.get_salary()<<"\n";

    double o;
    o=difference<double>(dad.get_salary(),mum.get_salary());
    cout<<"Roznica pomiedzy pensjami wynosi: "<<o<<endl;

    cout<<"Podatek zaplacony przez: "<<dad.get_name()<<"wynosi "<<dad.tex(dad.get_salary())<<endl;
    cout<<"Podatek zaplacony przez: "<<mum.get_name()<<"wynosi "<<mum.tex(mum.get_salary())<<endl;
    cout<<"Podatek zaplacony wspolnie: "<<w.tex(dad.get_salary(),mum.get_salary())<<endl;
    double suma_dad=0;
    for(auto &i :dad.income)
    {
        suma_dad+=i;
    }

    double suma_mum=0;
    for(auto &i : mum.income)
    {

        suma_mum+=i;

    }
    cout<<"Dochod z innych zrodel wynosi: "<<suma_dad<<endl<<"dla "<<dad.get_name()<<endl;
    cout<<"Dochod z innych zrodel wynosi: "<<suma_mum<<endl<<"dla "<<mum.get_name()<<endl;
}