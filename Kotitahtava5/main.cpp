#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori *n = new Notifikaattori();

    Seuraaja A("A");
    Seuraaja B("B");
    Seuraaja C("C");

    n->lisaa(&A);
    n->lisaa(&B);
    n->lisaa(&C);
    n->tulosta();

    n->postita("tama on viesti 1");

    n->poista(&B);

    n->postita("tama on viesti 2");

    return 0;
}
