#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int playermaxnumber;
    cout << "anna maxnumber" << endl;
    cin >> playermaxnumber;

    Game peliolio(playermaxnumber);
    peliolio.play();

    return 0;
}
