#include "Rapace.h"

Rapace::Rapace(int p, int a, string n)
{
   setPvRapace(p);
   setAtkRapace(a);
   setName(n);
}

Rapace::~Rapace()
{

}
void Rapace::setAtkRapace(int a){
    Zombie::setAtk(a/2);
}

void Rapace::setPvRapace(int p){
    Zombie::setPv(p/2);
}

void Rapace::rapide(Zombie* cible){
        cible->setPv(cible->getPv() - (getAtk()/2));
        setPv(getPv()+(getAtk()/2));
    }
