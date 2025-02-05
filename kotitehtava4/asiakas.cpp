#include "asiakas.h"

Asiakas::Asiakas(string name, double raha)
    : käyttötili(name), luottotili(name, raha)
{
    nimi = name;


}

string Asiakas::getNimi()
{
    return nimi;

}

void Asiakas::showSaldo()
{
    cout << "kayttotilin saldo " << käyttötili.getBalance() << endl;

}

bool Asiakas::talletus(double raha)
{
    cout << "talletus " << raha << endl;
    if(käyttötili.deposit(raha)){
        cout << "talletus onnistui. uusi saldo " << käyttötili.getBalance() << endl;
        return true;
    }
    return false;
}

bool Asiakas::nosto(double raha)
{
    cout << "nosto " << raha << endl;
    if(käyttötili.withdraw(raha)){
        cout << "nosto onnistui. uusi salso " << käyttötili.getBalance() << endl;
        return true;
    }
    return false;
}

bool Asiakas::luotonMaksu(double raha)
{
    cout << "luoton maksu " << raha << endl;
    luottotili.deposit(raha);
    return true;

}

bool Asiakas::luotonNosto(double raha)
{
    cout << "luoton nosto " << raha << endl;
    luottotili.withdraw(raha);
    return true;

}

bool Asiakas::tilinSiirto(double raha, Asiakas & vastaanottaja)
{
    double saldo=käyttötili.getBalance();
    cout << getNimi() << " tilinsiirto " << raha << endl;
    if(raha>saldo){
        cout << "siirto ei onnistunut" << endl;
        return false;
    }
    if(raha<0){
        cout << "siirto ei onnistunut" << endl;
        return false;
    }
    else{
        käyttötili.withdraw(raha);
        vastaanottaja.käyttötili.deposit(raha);
        cout << getNimi() << ": siirto onnistui. uusi saldo " << käyttötili.getBalance()  << endl;
        cout << vastaanottaja.getNimi() << ": vastaan otto onnistui. uusi saldo " << vastaanottaja.käyttötili.getBalance()  << endl;
        return true;
    }
}
