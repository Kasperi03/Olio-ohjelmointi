#include "italianchef.h"


ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "italichef konstruktori. kokin nimi " << name << endl;
    string salasana;
    askSecret(salasana, flour, water);

}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori"
         << endl;
}

bool ItalianChef::askSecret(string salasana, int, int)
{
    cout << "anna salasana " << endl;
    cin >> salasana;
    if(salasana == passWord){
        cout << "salasana oli oikein" << endl;
        makepizza();
        return true;
    }
    return false;
}

int ItalianChef::makepizza()
{
    cout << "making pizza" << endl;
    cout << "flour " << flour << endl;
    cout << "water " << water << endl;
    int ainekset = flour + water;
    int pizza = ainekset/10;
    cout << "pizzojen maara " << pizza << endl;
    return pizza;
}
