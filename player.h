//////////////////////////
// Filename: player.h
// Author: Martin Almaraz
// Date: Sun Jun 21 16:30:40 PDT 2015
//////////////////////////

#ifndef PLAYER_H
#define PLAYER_H
#include "object.h"
using namespace std;

class player: public object
{
    private:
        int score;
    public:
        player();
        void increaseScore(int score);
        int getScore();
};

#endif
