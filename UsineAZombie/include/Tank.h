#ifndef TANK_H
#define TANK_H

#include "Zombie.h"


class Tank : public Zombie
{
    private :
        int arm = 50;

    public :
        Tank(int pv, int atk, string n);
        ~Tank();
        void charge(Zombie* cible);
        int getArm();
        void setArmureTank(int arm);
        void showInfoTank();
        void setPv(int p);

};

#endif
