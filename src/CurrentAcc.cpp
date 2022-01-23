//
// Created by PW on 23.01.2022.
//

#include "CurrentAcc.h"
#include <fstream>
#include <cctype>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include "Help.h"
using namespace std;
CurrentAcc::CurrentAcc()
{
  //  cout << "\nThe CurrentAcc class started\n";
}
CurrentAcc::~CurrentAcc()
{
   // cout << "\nThe CurrentAcc class Ended\n";
}

void CurrentAcc::create_account()
{
    accountnumber = rand();
    cout << "\nThe account Number is : " << accountnumber;
    cout << "\nEnter The Name of The account Holder : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nEnter account type (enter s - saving or c - credit): ";
    cin >> type;
    type = toupper(type);
    cout << "\nEnter The Initial amount(500 or more for Saving and 1000 or more for current ): ";
    deposit=check();
    cout << "\n\n\nAccount Created Successfully...";
}

void CurrentAcc::show_account()
{
    cout << "\nAccount Number: " << accountnumber;
    cout << "\nAccount Holder Name: " << name;
    cout << "\nType of Account: " << type;
    cout << "\nBalance amount: " << deposit;
}

void CurrentAcc::modify_account()
{
    cout << "\nAccount Number: " << accountnumber;
    cout << "\nModify Account Holder Name: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nModify Type of Account: ";
    cin >> type;
    type = toupper(type);
}

void CurrentAcc::deposit_funds(int x )
{
    deposit += x;
}

void CurrentAcc::draw_funds(int x)
{
    deposit -= x;
}

void CurrentAcc::get_report()
{
    cout << accountnumber << setw(10) << " " << name << setw(10) << " " << type << setw(6) << deposit << endl;
}


int CurrentAcc::get_accountnumber()
{
    return accountnumber;
}

int CurrentAcc::get_funds()
{
    return deposit;
}

char CurrentAcc::get_accounttype()
{
    return type;
}

void CurrentAcc::write_account(char* file)
{
     CurrentAcc ac;
    ofstream outFile;
    outFile.open("account.dat", ios::binary | ios::app);
    ac.create_account();
    outFile.write(reinterpret_cast<char *>(&ac), sizeof(Account));
    outFile.close();
}

void CurrentAcc::display_sp(int n,char* file)
{
    CurrentAcc ac;
    bool flag = false;
    ifstream inFile;
    inFile.open( file, ios::binary);
    if (!inFile)
    {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    cout << "\nBALANCE DETAILS\n";

    while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc)))
    {
        if (ac.get_accountnumber() == n)
        {
            ac.show_account();
            flag = true;
        }
    }
    inFile.close();
    if (flag == false)
        cout << "\n\nAccount number does not exist";
}

void CurrentAcc::modify_account(int n,char* file)
{
    bool found = false;
    CurrentAcc ac;
    fstream File;
    File.open(file, ios::binary | ios::in | ios::out);
    if (!File)
    {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    while (!File.eof() && found == false)
    {
        File.read(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc));
        if (ac.get_accountnumber() == n)
        {
            ac.show_account();
            cout << "\n\nEnter The New Details of account: " << endl;
            ac.modify_account();
            int pos = (-1) * static_cast<int>(sizeof(CurrentAcc));
            File.seekp(pos, ios::cur);
            File.write(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc));
            cout << "\n\n\t Record Updated...";
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << "\n\n Record Not Found ";
}

void CurrentAcc::delete_account(int n,char* file)
{
    CurrentAcc ac;
    ifstream inFile;
    ofstream outFile;
    inFile.open(file, ios::binary);
    if (!inFile)
    {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    outFile.open("Temp.dat", ios::binary);
    inFile.seekg(0, ios::beg);
    while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc)))
    {
        if (ac.get_accountnumber() != n)
        {
            outFile.write(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc));
        }
    }

    inFile.close();
    outFile.close();
    remove(file);
    rename("Temp.dat", file);
    cout << "\n\n\tRecord Deleted...";
}

void CurrentAcc::display_all(char* file)
{
    int bankPassword = 12345, enteredPassword;
    cout << "Enter the BANK PASSWORD: \n";
    cin >> enteredPassword;
    if (enteredPassword == bankPassword)
    {
        CurrentAcc ac;
        ifstream inFile;
        inFile.open(file, ios::binary);
        if (!inFile)
        {
            cout << "File could not be open !! Press any Key...";
            return;
        }

        cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
        cout << "====================================================\n";
        cout << "Account No.      Name           Type      Balance\n";
        cout << "====================================================\n";
        while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc)))
        {
            ac.get_report();
        }
        inFile.close();

    }
    else {
        cout << "Please enter the correct password.\n";
    }
}

void CurrentAcc::deposit_withdraw(int n , int option,char* file)
{
    int amt;
    bool found = false;
    CurrentAcc ac;
    fstream File;
    File.open(file , ios::binary | ios::in | ios::out);
    if (!File)
    {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    while (!File.eof() && found == false)
    {
        File.read(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc));
        if (ac.get_accountnumber() == n)
        {
            ac.show_account();
            if (option == 1)
            {
                cout << "\n\n\tTO DEPOSITE AMOUNT ";
                cout << "\n\nEnter The amount to be deposited: ";
                cin >> amt;
                ac.deposit_funds(amt);
            }
            if (option == 2)
            {
                cout << "\n\n\tTO WITHDRAW AMOUNT ";
                cout << "\n\nEnter The amount to be withdraw: ";
                amt=check();
                int bal = ac.get_funds() - amt;
                if ((bal < 500 && ac.get_accounttype() == 'S') || (bal < 1000 && ac.get_accounttype() == 'C'))
                    cout << "Insufficience balance";
                else
                    ac.draw_funds(amt);
            }
            int pos = (-1) * static_cast<int>(sizeof(ac));
            File.seekp(pos, ios::cur);
            File.write(reinterpret_cast<char *>(&ac), sizeof(CurrentAcc));
            cout << "\n\n\t Record Updated";
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << "\n\n Record Not Found ";
}