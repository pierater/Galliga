/*
 * LinkedList_Enemy.h
 *
 *  Created on: Jun 5, 2015
 *      Author: katie
 */

#ifndef LINKEDLIST_ENEMY_H_
#define LINKEDLIST_ENEMY_H_
#include "Enemy.h"
#include <iostream>
using namespace std;

class LinkedList_Enemy {
    private:
        class Node
        {
            public:
                Enemy data;
                Node *next;

                Node(Enemy element)
                {
                    data = element;
                    next = nullptr;
                }
        };
    
        Node *head;
        int n;

    public:
    	LinkedList_Enemy();
    	virtual ~LinkedList_Enemy();
        int size();
        void add(Enemy element);
        Enemy* get(int index);
        int indexOf(Enemy element);
        bool remove(Enemy element);        
    
};

#endif /* LINKEDLIST_ENEMY_H_ */
