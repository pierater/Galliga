/*
 * LinkedList_queue.cpp
 *
 *  Created on: Jun 12, 2015
 *      Author: katie
 */

#include "LinkedList_queue.h"

LinkedList_queue::LinkedList_queue() {
	first = nullptr;
    tail = nullptr;
    n = 0;
}

bool LinkedList_queue::isEmpty() {
	return first == nullptr;
}

void LinkedList_queue::queue(int element) {
	if(isEmpty())
    {
        first = new Node(element);
        tail = first;
        n++;
    }
    else
    {
        tail->next = new Node(element);
        tail = tail->next;
        n++;
    }
}

int LinkedList_queue::dequeue() {
    
    if(n==0)
        return -1;
    Node *temp = first;
    int data = temp->data;
    delete first;
    first = temp->next;
    n--;
    return data;
    
}

int LinkedList_queue::peek() {
    return first->data;
}

int LinkedList_queue::size() {
    return n;
}

void LinkedList_queue::removeAll() {
    if(isEmpty())
        return;
    else
    {
        dequeue();
        removeAll();
    }
}

LinkedList_queue::~LinkedList_queue() {
	removeAll();
}

