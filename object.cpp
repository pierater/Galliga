//////////////////////////
// Filename: object.cpp
// Author: Martin Almaraz
// Date: Sun Jun 21 16:34:18 PDT 2015
//////////////////////////


#include "object.h"
using namespace std;

object::object()
{
    xCor = 0;
    yCor = 0;
    health = 0;
}

int object::getX()
{
    return xCor;
}

int object::getY()
{
    return yCor;
}

void object::setX(int x)
{
    if(x >= 20)
        return;
    else
        xCor = x;
}

void object::setY(int y)
{
    if(y >= 22)
        return;
    else
        yCor = y;
}

void object::shiftRight()
{
    if(xCor >= 20)
        return;
    else
        xCor++;
}

void object::shiftLeft()
{
    if(xCor <= 1)
        return;
    else
        xCor--;
}

void object::shiftUp()
{
    if(yCor <= 1)
        return;
    else
        yCor--;
}

void object::shiftDown()
{
    if(yCor >= 22)
        return;
    else
        yCor++;
}

void object::decreaseHealth()
{
    if(health)
        health--;
    else
        return;
}

void object::increaseHealth()
{
    health++;
}

void object::setHealth(int health)
{
    if(health >= 0)
        this->health = health;
    else
        return;
}

int object::getHealth()
{
    return health;
}

bool operator==(const object& L, const object& R)
{
    if(L.xCor == R.xCor && L.yCor == R.yCor && L.health == R.health)
        return true;
    else
        return false;
}
