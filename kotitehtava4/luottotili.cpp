#include "luottotili.h"

Luottotili::Luottotili(string name, double raha)
    : Pankkitili(name)
{
    cout << "Luottotili omistaja " << name
         << endl;
    luottoraja = raha;
    cout << "luottotilin saldo " << luottoraja << endl;
}

bool Luottotili::deposit(double raha)
{
    if(raha<0){
        return false;
        cout << "ei onnistunut " << luottoraja << endl;
    }
    if(luottoraja > 1000){
        return false;
        cout << "ei onnistunut " << luottoraja << endl;
    }
    else{
        luottoraja = raha + luottoraja;
        cout << "onnistui. luottoraja " << luottoraja << endl;
        return true;
    }
}

bool Luottotili::withdraw(double raha)
{
    cout << "luottoraja on " << luottoraja << endl;
    if(raha < 0){
        return false;
        cout << "ei onnistunut " << endl;
    }

    if(raha + saldo > luottoraja){
        cout << "ei onnistunut " << endl;
        return false;
    }
    else{
        luottoraja = luottoraja - raha;
        cout << "onnistui. luottoa jaljelja " << luottoraja << endl;
        return true;
    }
}
