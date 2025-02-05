#include "pankkitili.h"

Pankkitili::Pankkitili(string name)
{
    cout << "kayttotilin omistaja " << name << endl;


}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double raha)
{
    if(raha<0){
        return false;
    }
    else{
        saldo = saldo + raha;
        return true;
    }
}

bool Pankkitili::withdraw(double raha)
{
    if(raha < 0){
        return false;
        cout << "ei onnistunut " << endl;
    }

    if(raha > saldo){
        cout << "ei onnistunut " << endl;
        return false;
    }
    else{
        saldo = saldo - raha;
        return true;
    }
}
