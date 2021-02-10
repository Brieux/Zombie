#ifndef BOMBER_H
#define BOMBER_H

#include "Zombie.h"


class Bomber : public Zombie
{
    public :
        Bomber(int pv, int atk, string n);
        ~Bomber();
        void explosion(Zombie* cible);

        void setAtkBomber(int a);

};

#endif
