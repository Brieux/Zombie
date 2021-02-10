#include "Zombie.h"
Zombie::Zombie(){
    atk = 10;
    pv = 5;
    name = "None";
}

Zombie::Zombie(int p, int a, string n)
{
    if (a > 10){
        cout <<"Erreur de puissance" << endl;
        this->~Zombie();
    }
    if (p > 100){
        cout <<"Erreur de resistance" << endl;
        this->~Zombie();
    }
    pv = p;
    atk = a;
    name = n;
}

Zombie::~Zombie()
{
    cout <<"Le zombie " << name << " est mort." << endl;
}

int Zombie::getPv(){
    return pv;
}

int Zombie::getAtk(){
    return atk;
}

string Zombie::getName(){
    return name;
}

void Zombie::setPv(int p){

    if (pv < 0){
        p = 1;
    }
    else {
        pv = p;
    }
}

void Zombie::setAtk(int a){

    if (a < 0){
        atk = 1;
    }
    else {
        atk = a;
    }
}

void Zombie::setName(string n){
    name = n;
}

void Zombie::showInfo(){
    cout << "Le zombie " << name << " possede " << pv <<" pv et " << atk << " points d'attaque." << endl;
}

void Zombie::attaque(Zombie * cible){
    cout << getName() << " attaque " << cible->getName() << endl;
    cible->setPv(cible->getPv()-getAtk());
    cout << "La cible " << cible->getName() <<" possede maintenant " << cible->getPv() << " PV" << endl;
    if (cible->getPv() <= 0){
        cout << "La cible " << cible->getName() << " est morte dans d'attroce souffrance" << endl;
        cible->~Zombie();
    }
}

void Zombie::debuff(){
    setAtk(atk / 2);
}
