//////////////////////////
// Filename: Lazer.h
// Author: Martin Almaraz
// Date: Sun Jun 21 17:55:24 PDT 2015
//////////////////////////

#ifndef LAZER_H
#define LAZER_H
#include "object.h"

using namespace std;

class Lazer: public object
{
    public:
        int damage;
        int getDamage();
        void setDamage(int dam);
        void increaseDamage();
        void resetDamage();
        friend bool operator==(const Lazer& L, const Lazer& R);
        Lazer();
};

#endif
