/*
 * LinkedList_Enemy.h
 *
 *  Created on: Jun 5, 2015
 *      Author: katie
 */

#ifndef LINKEDLIST_LAZER_H_
#define LINKEDLIST_LAZER_H_
#include "Lazer.h"
#include <iostream>
using namespace std;

class LinkedList_Lazer {
    private:
        class Node
        {
            public:
                Lazer data;
                Node *next;

                Node(Lazer element)
                {
                    data = element;
                    next = nullptr;
                }
        };
    
        Node *head;
        int n;

    public:
    	LinkedList_Lazer();
    	virtual ~LinkedList_Lazer();
        int size();
        void add(Lazer element);
        Lazer* get(int index);
        int indexOf(Lazer element);
        bool remove(Lazer element);        
    
};

#endif /* LINKEDLIST_ENEMY_H_ */
