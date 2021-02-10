#ifndef RAPACE_H
#define RAPACE_H

#include "Zombie.h"


class Rapace : public Zombie
{
    public :
        Rapace(int pv, int atk, string n);
        ~Rapace();
        void rapide(Zombie* cible);

        void setPvRapace(int p);
        void setAtkRapace(int a);

};

#endif
