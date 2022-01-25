//
// Created by PW on 24.01.2022.
//

#ifndef PROJECT_JIPP2_TAXES_H
#define PROJECT_JIPP2_TAXES_H
#include <iostream>
#include <vector>
#include <string>
#include "Help.h"
using namespace std;
/*
 * class Taxees
 */
class Taxes {
/*
 * name - przechowuje nazwe klienta
 * salary przechowuje wartosc wczytanej pensji
 */
string name;
double salary;
public:
/*
 * Kontener przechowywujący "dodatkowe zródlo zrodla dochodu"
 */
    vector<double>income;
    /*
     * Konstruktor klasy Taxes
     */
    Taxes();
    /*
     * Destruktor klasy Taxes
     */
    ~Taxes();
    /*
     * Funkcja ustawiająca nazwe klienta
     * name - nazwa klienta
     */
    void set_name(string name);
    /*
     * Funkcja ustawiająca pensje klienta
     * salary -zmienna przechowywujaca wartosc pensji
     */
    void set_salary(double salary);
    /*
     * Funkcja zwracająca wartosc pensji
     */
    double get_salary();
    /*
     * Funckja obliczająca podatek
     * a - wartosc pensji
     */
    double tex(double a);
    /* Funckja obliczająca podatek  dla sumy dochodów obu użytkownikow
     * @parma m,n -wartosć pensji
     */
    double tex(double m, double n);
    /*
     * Funckja zwaraca nazwe użytkownika
     */
    string get_name();
    /*
     * Przeciążenie operatora +
     * @parm Taxes &obj  przekazanie adresu obieku
     */
    Taxes operator+(Taxes &obj)
    {
        Taxes wynik;
        wynik.salary=salary+obj.salary;
        return wynik;
    };


};



#endif //PROJECT_JIPP2_TAXES_H
