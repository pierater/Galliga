//////////////////////////
// Filename: Lazer.cpp
// Author: Martin Almaraz
// Date: Sun Jun 21 17:55:24 PDT 2015
//////////////////////////


#include "Lazer.h"
using namespace std;

Lazer::Lazer()
{
    damage = 1;
}

int Lazer::getDamage()
{
    return damage;
}

void Lazer::setDamage(int dam)
{
    if(dam >= 0)
        damage = dam;
    else
        return;
}

void Lazer::increaseDamage()
{
    damage++;
}

void Lazer::resetDamage()
{
    damage = 1;
}

bool operator==(const Lazer& L, const Lazer& R)
{
    if(L.xCor == R.xCor && L.yCor == R.yCor && L.health == R.health)
        return true;
    else
        return false;
}

