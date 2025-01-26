#include "chef.h"

Chef::Chef(string name)
{
    cheftName = name;
    cout << "Chef konstruktor, kokin nimi "
         << name
         << endl;
    if(name == "Gordon"){
    makeSoup(18);
    makeSalad(20);
    }
    if(name == "Mario"){
        makeSalad(9);
    }
}

Chef::~Chef()
{
    cout << "cheft destruktori"
         << endl;
}

string Chef::getName() const
{
    return cheftName;
}

int Chef::makeSalad(int aines)
{
    cout << "aineksia "
         << aines
         << endl;
    cout << "annoksia "
         << aines/5
         << endl;
    return aines/5;
}

int Chef::makeSoup(int aines)
{
    cout << "aineksia "
         << aines
         << endl;
    cout << "annoksia "
         << aines/3
         << endl;
    return aines/3;
}


