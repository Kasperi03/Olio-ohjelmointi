#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>

using namespace std;

class ItalianChef : Chef

{
public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string, int, int);

    void setFlour(int newFlour);

private:

    string passWord = "pizza";
    int flour = 15;
    int water = 22;
    int makepizza();

};

#endif // ITALIANCHEF_H
