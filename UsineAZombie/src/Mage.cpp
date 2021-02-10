#include "Mage.h"

Mage::Mage(int p, int a, string n)
{
   setPvMage(p);
   setAtkMage(a);
   setName(n);
   usable = true;
}

Mage::~Mage()
{

}
void Mage::setAtkMage(int a){
    Zombie::setAtk(a/2);
}

void Mage::setPvMage(int p){
    Zombie::setPv(p/2);
}

void Mage::sortilege(Zombie* cible){
        if (usable){
            cible->debuff();
            usable = false;
        }
    }
