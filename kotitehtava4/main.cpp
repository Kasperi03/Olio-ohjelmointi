#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"
using namespace std;

int main()
{
    Asiakas pa("gordon", 1000);
    pa.showSaldo();
    cout << endl;

    pa.talletus(500);
    pa.luotonNosto(500);
    pa.showSaldo();
    cout << endl;

    Asiakas pi("mario", 1000);
    pi.showSaldo();
    pa.tilinSiirto(50, pi);
    cout << endl;



    return 0;
}
