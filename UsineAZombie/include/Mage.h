#ifndef MAGE_H
#define MAGE_H

#include "Zombie.h"


class Mage : public Zombie
{
    private:
        bool usable = true;

    public :
        Mage(int pv, int atk, string n);
        ~Mage();
        void sortilege(Zombie* cible);

        void setPvMage(int p);
        void setAtkMage(int a);

};

#endif
