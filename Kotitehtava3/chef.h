#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;


class Chef
{
public:
    Chef(string name);
    ~Chef();
    string  getName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);

protected:
    string cheftName;
};

#endif // CHEF_H
