#ifndef BOMBER_H
#define BOMBER_H

#pragma once
#include <string>
#include "Zombie.h"
using namespace std;
class Bomber : public Zombie
{
    public:
        Bomber(int p,int a, string name);

    protected:

    private:
};

#endif // BOMBER_H
