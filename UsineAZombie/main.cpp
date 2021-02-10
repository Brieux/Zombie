#include <iostream>
#include "Bomber.h"
#include "Rapace.h"
#include "Tank.h"


using namespace std;

int main()
{
    Zombie z1(10,5,"Z1");
    z1.showInfo();
    Zombie z2(200,4,"Z2");
    z2.setAtk(15);
    //z2.showInfo();

    Bomber b1(200,15,"B1");
    b1.setAtkBomber(5);
    //b1.showInfo();

    Rapace r1(100,10,"R1");
    //r1.showInfo();
    /*r1.setAtkRapace(10);
    r1.setPvRapace(200);
    r1.showInfo();
    r1.rapide(&b1);
    r1.showInfo();
    b1.showInfo();
    b1.explosion(&r1);
    b1.showInfo();
    r1.showInfo();*/

    Tank t1(100,10,"T1");
    t1.showInfoTank();
    b1.explosion(&t1);
    t1.showInfoTank();
    Bomber b2(200,15,"B2");
    b2.setAtkBomber(5);
    b2.explosion(&t1);
    t1.showInfoTank();


    /*fin*/
    cout << endl;
    cout << endl;
    return 0;
}
