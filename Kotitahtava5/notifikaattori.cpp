#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusiseuraaja)
{
    uusiseuraaja->next = seuraajat;
    seuraajat = uusiseuraaja;
    cout << "Notifikaattori lisaa seuraajan " << uusiseuraaja->getNimi() << endl;

}

void Notifikaattori::poista(Seuraaja *vanhaseuraaja)
{
    seuraajat->next = vanhaseuraaja;
    seuraajat->next = vanhaseuraaja->next;
    cout << "Notifikaattori poistaa seuraajan " << vanhaseuraaja->getNimi() << endl;
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin suraajat:" << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        if(alku != nullptr){
            cout << "Seuraava " << alku->getNimi() << endl;
            alku=alku->next;
        }
    }

}

void Notifikaattori::postita(string viesti)
{
    cout << "Notifikaattori postaa viestin " << viesti << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        if(alku != nullptr){
            alku->paivitys(viesti);
            alku=alku->next;
        }
    }

}
