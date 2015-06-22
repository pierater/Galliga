//////////////////////////
// Filename: player.cpp
// Author: Martin Almaraz
// Date: Sun Jun 21 16:30:40 PDT 2015
//////////////////////////


#include "player.h"
#include "object.h"
using namespace std;

player::player()
{
    score = 0;
    setHealth(3);
}

void player::increaseScore(int score)
{
    if(score >= 0)
        this->score += score;
    else
        return;
}

int player::getScore()
{
    return score;
}
