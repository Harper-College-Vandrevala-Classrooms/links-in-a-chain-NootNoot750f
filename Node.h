//
// Created by nickh on 11/24/2024.
//

#ifndef NODE_H
#define NODE_H


#include "ChainLink.h"
class Node {
public:
    Node(ChainLink* data);
    ChainLink* getData();

    Node *getNext();

    void setNext(Node* nextNode);

private:
    ChainLink* data;
    Node* next;
};



#endif //NODE_H
