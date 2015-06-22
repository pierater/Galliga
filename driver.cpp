//////////////////////////
// Filename: driver.cpp
// Author: Martin Almaraz
// Date: Sun Jun 21 17:28:53 PDT 2015
//////////////////////////

#include <iostream>
#include "object.h"
#include "player.h"
#include "Lazer.h"
#include "Enemy.h"
#include "LinkedList_Enemy.h"
#include "LinkedList_Lazer.h"

using namespace std;

int main()
{
    /*
    player p1;
    
    cout << p1.getX() << endl;
    p1.shiftRight();
    cout << p1.getX() << endl;

    cout << p1.getHealth() << endl;
    p1.decreaseHealth();
    p1.decreaseHealth();
    cout << p1.getHealth() << endl;
    

    Lazer lzr;
    cout << lzr.getDamage() << endl;
    
    
    Enemy thing;
    cout << thing.getReward() << endl;
    thing.setReward(100);
    cout << thing.getReward() << endl;
    
    
    LinkedList_Enemy lis;
    Enemy test;
    Enemy test2;
    
    lis.add(test);
    lis.add(test2);
    cout << lis.size() << endl;
    
    cout << lis.get(1)->getX() << endl;
    lis.get(1)->setX(15);
    cout << lis.get(1)->getX() << endl;
    */

    LinkedList_Lazer lzrs;
    Lazer shooty;
    Lazer shooty2;

    lzrs.add(shooty);
    cout << lzrs.size() << endl;
    lzrs.add(shooty2);
    
    cout << lzrs.size() << endl;
    cout << lzrs.get(1)->getX() << endl;
    lzrs.get(1)->setY(10);
    cout << lzrs.get(1)->getY() << endl;
    cout << lzrs.remove(shooty) << endl;
    cout << lzrs.size() << endl;
	return 0;
}

