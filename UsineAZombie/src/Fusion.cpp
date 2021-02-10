#include "Fusion.h"

Fusion::Fusion(int p, int a, string n)
{
   setPv(p);
   setAtk(a);
   setName(n);
}

Fusion::~Fusion()
{

}

void Fusion::absorption(Zombie* cible, string cible){
    if ((getPv() > cible->getPv() )|| (getAtk() > cible ->getAtk())){
        setPv(getPv() + cible->getPv());
        setAtk(getAtk() + cible->getAtk());
        if (cible =="tank"){
            setPv(getPv()+cible->getArm());
        }
        if (cible =="Bomber"){
            cible->~Zombie();
            ~Zombie;
        }
        cible->~Zombie();
    }
    if (getPv() > 500 && getAtk() > 200){
        cout << "c'est perdu" << endl;
        exit();
        return 0;
    }
}
