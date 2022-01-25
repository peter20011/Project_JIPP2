//
// Created by PW on 23.01.2022.
//

#ifndef PROJECT_JIPP2_SAVINGSACC_H
#define PROJECT_JIPP2_SAVINGSACC_H
#include <Account.h>
#include <string>
#include "Help.h"
/*
 * Klasa SaivingsAcc- klasa pochodna po klasie Accout , dziedziczy po niej metody oraz atrybuty
 */
class SavingsAcc : public Account{
public:
    /*
     * Konstruktor klasy SavingsAcc
     */
    SavingsAcc();
    /*
     * Destruktor klasy SavingsAcc
     */
    ~SavingsAcc();
    /*
     * Funkcja odpowiadajaca za tworzenie konta
     */
    void create_account();
    /*
     * Funkcja odpowiadajaca za wyswitlenie informacji o koncie
     */
    void show_account();
    /*
     * Funkcja pozwalajaca modyfikowac wybrane parametry konta
     */
    void modify_account();
    /* Funkcja pozwala na dodanie depozytu do konta
     * @parma x - wielkosc depozytu
     */
    void deposit_funds(double x);
    /*
     * Funkcja pozwalająca na wypłacenie funduszy
     * @parm x - wielkosc wyplaty
     */
    void draw_funds(double x);
    /*
     * Pobieranie informacji o koncie
     */
    void get_report();
    /*
     * Funkcja zwraca numer konta
     */
    int get_accountnumber();
    /*
     * Funkcja zwraca wartosc depozytu
     */
    int get_funds();
    /*
     * Funkcja zwraca typ konta
     *
     */
    char get_accounttype();
    /*
     * Funkcja zapisująca do pliku  stworzone konto
     * @parm *file wskaznik na nazwe plku wczytaną z uruchomieniem programu
     */
    void write_account(char* file );
    /*
     * Funkcja wypisujca informacje o konice
     * @parm n - numer konta
     * @parm *file -wskaznik na nazwe pliku
     */
    void display_sp(int n,char* file );
    /*   Funkcja pozalajaca modyfikowac wybrane aspekty konta
     *  @parm n - numer konta
     *  @parm *file -wskaznik na nazwe pliku
     */
    void modify_account(int n,char* file );
    /*
     * Funkcja usuwajaca konto
     * @parm n - numer konta
     * @parm *file -wskaznik na nazwe pliku
     */
    void delete_account(int n,char* file );
    /*
     * Funnkcja wyswietlajaca wszystkie konta z pliku
     * @parm *file -wskaznik na nazwe pliku
     */
    void display_all(char* file );
    /*
     * Funkcja pozwalajaca na wpłaty i wypaty w zaleznosci od przekazanego parametru
     * 1 - wpłata
     * 2- wyplata
     * @parm n - numer konta
     * @parm - opcja
     * @parm *file -wskaznik na nazwe pliku
     */
    void deposit_withdraw(int n, int option,char* file );
    /*
     * dokumentacja w Help.h
     */
    friend double check();
    /*
     * dokumentacja w Help.h
     */
    friend int check_s();
};


#endif //PROJECT_JIPP2_SAVINGSACC_H
