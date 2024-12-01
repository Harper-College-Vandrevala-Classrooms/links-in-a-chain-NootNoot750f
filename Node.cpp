//
// Created by nickh on 11/24/2024.
//

#include "Node.h"
Node::Node(ChainLink* data) {
    this->data = data;
    this->next = nullptr;
}

ChainLink* Node::getData() {
    return data;
    
}
Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}