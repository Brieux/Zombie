#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
class Zombie
{
    public:
        //Constructeur & Destructeur
        Zombie();
        Zombie(int pv, int atk, string name);
        ~Zombie();

        //Getter & Setter
        int getPv();
        virtual void setPv(int p);

        int getAtk();
        void setAtk(int a);

        string getName();
        void setName(string n);

        //Methodes
        void attaque(Zombie *cible);
        void showInfo();
        virtual void debuff();

    private:
        int pv = 0;
        int atk = 0;
        string name = "Zombie";
};
