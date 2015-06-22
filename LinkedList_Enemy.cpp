//============================================================================
// Name        : LinkedList_Enemy.cpp
// Author      : Katie Cunningham
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "LinkedList_Enemy.h"
#include "Enemy.h"

LinkedList_Enemy::LinkedList_Enemy() {
    head = nullptr;
    n = 0;

}

LinkedList_Enemy::~LinkedList_Enemy() {
	
    Node *temp;
    Node *curr = head;
    
    while(curr != NULL)
    {
        temp = curr;
        delete curr;
        curr = temp->next;
    }
}

int LinkedList_Enemy::size() {
    return n;
}

void LinkedList_Enemy::add(Enemy element) {

    
    if(n != 0)
    {
        Node *curr = head;
        while(curr->next != nullptr)
        {
            curr =  curr->next;
        }
    
         curr->next = new Node(element);
        n++;
    }
    else
    {
        head = new Node(element);
        n++;
    }
}

Enemy* LinkedList_Enemy::get(int index)
{
    Node *curr = head;
    for(int i = 0; i < index - 1; i++)
    {
        curr = curr->next;
    }
    Enemy *temp = &curr->data;
    return temp;
}

int LinkedList_Enemy::indexOf(Enemy element)
{

    Node *curr = head;
    for(int i = 1; i < n + 1; i++)
    {
        if(curr->data == element)
            return i;
        else
            curr = curr->next;
    }
    return -1;

}

bool LinkedList_Enemy::remove(Enemy element)
{

    Node *pre = NULL;
    Node *curr = NULL;
    if(head->data == element)
    {
        curr = head;
        head = curr->next;
        delete curr;
        return true;
    }
    
    pre = head;
    curr = head->next;

    while(curr != NULL)
    {
        if(curr->data == element)
        {
            pre->next = curr->next;
            delete curr;
            return true;
        }
    
        pre = curr;
        curr = curr->next;
    }
    return false;
            
}
