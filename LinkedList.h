//
// Created by nickh on 11/24/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ChainLink.h"


class Node;

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void append(ChainLink *newLink);
    ChainLink* get(int index);
    int getSize() const;



private:
    Node* head;
    Node* tail;
    int size;
};



#endif //LINKEDLIST_H
