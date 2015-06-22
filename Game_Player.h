//////////////////////////
// Filename: Game_Player.h
// Author: Martin Almaraz
// Date: Sun Jun 21 22:20:27 PDT 2015
//////////////////////////

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H
#include <ncurses.h>
#include "Enemy.h"
#include "LinkedList_Enemy.h"
#include "Lazer.h"
#include "LinkedList_Lazer.h"
#include "player.h"
#include "object.h"
#include "LinkedList_queue.h"
#include <cstdlib>
#include <fstream>


using namespace std;

class Game_Player
{
    private:
        LinkedList_queue que;
        LinkedList_Lazer lazers;
        LinkedList_Enemy enemies;
        player ship;
        
        int num_enemies;
        int difficulty;
        
        int refresh_;
        int newGame_;
        int createEnemies_;
        int setupMap_;
        int checkCollisions_;
        int endGame_;
        int highScores_;
        int shoot_;
        int checkBonus_;
        
    public:
        void refresh();
        void newGame();
        void createEnemies();
        void setupMap();
        void checkCollisions();
        void endGame();
        void highScores();
        void shoot();
        void checkBonus();
        
        Game_Player();
};

#endif
