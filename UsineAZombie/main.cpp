#include <iostream>
#include "Bomber.h"


using namespace std;

int main()
{
    Zombie z1(10,5,"Z1");
    z1.showInfo();
    Zombie z2(200,4,"Z2");
    z2.setAtk(15);
    z2.showInfo();





    /*fin*/
    cout << endl;
    cout << endl;
    return 0;
}
