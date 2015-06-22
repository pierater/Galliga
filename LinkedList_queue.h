/*
 * LinkedList_queue.h
 *
 *  Created on: Jun 12, 2015
 *      Author: Martin Almaraz
 */

#ifndef LINKEDLIST_QUEUE_H_
#define LINKEDLIST_QUEUE_H_

#include <string>
using namespace std;

class LinkedList_queue {

private:
	class Node {
	public:
		int data;
		Node *next;

		Node(int element) {
			data = element;
			next = nullptr;
		}

		Node(int element, Node *nextRef) {
			data = element;
			next = nextRef;
		}
	};

	Node *first;
    Node *tail;
    int n;

public:
	LinkedList_queue();
	bool isEmpty();
	void queue(int element);
    int dequeue();
    int peek();
	int size();
	void removeAll();
	~LinkedList_queue();
};

#endif /* LINKEDLIST_QUEUE_H_ */
