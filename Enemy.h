//////////////////////////
// Filename: Enemy.h
// Author: Martin Almaraz
// Date: Sun Jun 21 18:07:06 PDT 2015
//////////////////////////

#ifndef ENEMY_H
#define ENEMY_H
#include "object.h"

using namespace std;

class Enemy: public object
{
    private:
        int reward;
    public:
        int getReward();
        void setReward(int amount);
        friend bool operator==(const Enemy& L, const Enemy& R);
        Enemy();
};

#endif
