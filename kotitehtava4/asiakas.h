#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>

using namespace std;

class Asiakas
{
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tilinSiirto(double, Asiakas &);

private:
    string nimi;
    Pankkitili käyttötili;
    Luottotili luottotili;

};

#endif // ASIAKAS_H
