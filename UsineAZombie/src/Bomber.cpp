#include "Bomber.h"

Bomber::Bomber(int p, int a, string n)
{
   setPv(p);
   setAtkBomber(a);
   setName(n);
}

Bomber::~Bomber()
{

}
void Bomber::setAtkBomber(int a){
    Zombie::setAtk(a*2);
}

void Bomber::explosion(Zombie* cible){
        cible->setPv(cible->getPv() - (getAtk()*3));
        setPv(0);
        Zombie::~Zombie;
    }
