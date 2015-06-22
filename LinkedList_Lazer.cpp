//============================================================================
// Name        : LinkedList_Lazer.cpp
// Author      : Katie Cunningham
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "LinkedList_Lazer.h"
#include "Lazer.h"

LinkedList_Lazer::LinkedList_Lazer() {
    head = nullptr;
    n = 0;

}

LinkedList_Lazer::~LinkedList_Lazer() {
	
    Node *temp;
    Node *curr = head;
    
    while(curr != NULL)
    {
        temp = curr;
        delete curr;
        curr = temp->next;
    }
}

int LinkedList_Lazer::size() {
    return n;
}

void LinkedList_Lazer::add(Lazer element) {

    
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

Lazer* LinkedList_Lazer::get(int index)
{
    Node *curr = head;
    for(int i = 0; i < index - 1; i++)
    {
        curr = curr->next;
    }
    Lazer *temp = &curr->data;
    return temp;
}

int LinkedList_Lazer::indexOf(Lazer element)
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

bool LinkedList_Lazer::remove(Lazer element)
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
