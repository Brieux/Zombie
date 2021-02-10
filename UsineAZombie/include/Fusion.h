#ifndef FUSION_H
#define FUSION_H

#include "Zombie.h"


class Fusion : public Zombie
{
    public :
        Fusion(int pv, int atk, string n);
        ~Fusion();
        void absorption(Zombie* cible, string target);

};

#endif
