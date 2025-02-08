#include "seuraaja.h"
Seuraaja::Seuraaja(string name)
{
    nimi = name;
    cout << "luodaan seuraaja " << nimi << endl;

}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " sai viestin " << viesti << endl;

}
