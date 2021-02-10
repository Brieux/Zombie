#include "Tank.h"

Tank::Tank(int p, int a, string n)
{
   Zombie::setPv(p);
   setAtk(a);
   setName(n);
   arm = 50;
}

Tank::~Tank()
{

}
void Tank::setArmureTank(int ar){
    arm = ar;
}

int Tank::getArm(){
    return arm;
}

void Tank::setPv(int p){
    int compteur = getPv() - p;
    while (compteur > 0){
        if (arm > 0) {
            arm -= 1;
            compteur -= 1;
        }
        else {
            Zombie::setPv(Zombie::getPv()- compteur);
            compteur = 0;
        }
    }
}

void Tank::debuff(){
    setAtk(getAtk()/2);
    arm = 0;
}

void Tank::charge(Zombie* cible){
    cible->setPv(cible->getPv() - getArm());
}

void Tank::showInfoTank(){
    Zombie::showInfo();
    cout << "C'est un tank et il possede : " << arm << " points d'armure" << endl;
}

