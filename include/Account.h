//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_ACCOUNT_H
#define PROJECT_JIPP2_ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;
/*
 * class Account - klasa abstrakcyjna  /klasa bazowa
 */
class Account {
protected:
    /*
     * accountnumber - przechowuje numer konta
     * name - przechowuje imie klienta
     * type- przechowuje informacje o type konta wybranego przez uzytkownika
     * deposit -przechowuje wartosc depozytu
     */
    int accountnumber ;
    char name[50];
    double deposit;
    char type;
public:
    /*
     * Konstruktor klasy Account
     */
    Account();
    /*
     * Destruktor klasy Account
     */
    ~Account();
    /*
     * Funkcja odpowiadajaca za tworzenie konta (wirtualna)
     */
    virtual void  create_account()=0;
    /*
     * Funkcja odpowiadajaca za wyswitlenie informacji o koncie (wirtualna)
     */
    virtual void  show_account()=0;
    /*
     * Funkcja pozwalajaca modyfikowac wybrane parametry konta (wirtualna)
     */
    virtual void   modify_account()=0;
    /* Funkcja pozwala na dodanie depozytu do konta (wirtualna)
     *  @parma m  - wielkosc depozytu
     */
    virtual void   deposit_funds(double m)=0;
    /*Funkcja pozwalająca na wypłacenie funduszy (wirtualna)
     * @parm w - wielkosc wyplaty
     */
    virtual void  draw_funds(double w)=0;
    /*
     * Pobieranie informacji o koncie (wirtualna)
     */
    virtual void   get_report()=0;
    /*
     * Funkcja zwraca numer konta (wirtualna)
     */
    virtual int   get_accountnumber()=0;
    /*
     * Funkcja zwraca wartosc depozytu (wirtualna)
     */
    virtual int   get_funds()=0;
    /*
     * Funkcja zwraca typ konta (wirtualna)
     */
    virtual char  get_accounttype()=0;
    /* Funkcja zapisująca do pliku  stworzone konto (wirtualna)
     *  @parm *file wskaznik na nazwe plku wczytaną z uruchomieniem programu
     */
    virtual void  write_account(char* file )=0;
    /*
     * Funkcja wypisujca informacje o konice (wirtualna)
     *  @parm n - numer konta
     *  @parm *file -wskaznik na nazwe pliku
     */
    virtual void   display_sp(int n, char* file)=0;
    /* Funkcja pozalajaca modyfikowac wybrane aspekty konta (wirtualna)
     * @parm n - numer konta
     *  @parm *file -wskaznik na nazwe pliku
     */
    virtual void  modify_account(int n ,char* file)=0;
    /*  Funkcja usuwajaca konto (wirtualna)
     * @parm n - numer konta
     *  @parm *file -wskaznik na nazwe pliku
     */
    virtual void   delete_account(int n,char* file)=0;
    /*
     * Funnkcja wyswietlajaca wszystkie konta z pliku (wirtualna)
     *  @parm *file -wskaznik na nazwe pliku
     */
    virtual void   display_all(char* file)=0;

     /*
      * Funkcja pozwalajaca na wpłaty i wypaty w zaleznosci od przekazanego parametru (wirtualna)
      * 1 - wpłata
      * 2- wyplata
      * @parm n - numer konta
      *  @parm - opcja
      * @parm *file -wskaznik na nazwe pliku
      */
    virtual void   deposit_withdraw(int n, int option,char* file)=0;
};


#endif //PROJECT_JIPP2_ACCOUNT_H
