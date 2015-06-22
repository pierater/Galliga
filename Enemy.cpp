//////////////////////////
// Filename: Enemy.cpp
// Author: Martin Almaraz
// Date: Sun Jun 21 18:07:06 PDT 2015
//////////////////////////


#include "Enemy.h"
#include "object.h"
using namespace std;

Enemy::Enemy()
{
    reward = 50;
}

int Enemy::getReward()
{
    return reward;
}

void Enemy::setReward(int amount)
{
    if(amount >= 0)
        reward = amount;
    else
        return;
}

bool operator==(const Enemy& L, const Enemy& R)
{
    if(L.xCor == R.xCor && L.yCor == R.yCor && L.health == R.health)
        return true;
    else
        return false;
}

