#include "LinkedList.h"
#include "Node.h"
#include "ChainLink.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->getNext();
        delete current->getData(); // Free the ChainLink
        delete current;           // Free the Node
        current = nextNode;
    }
}

void LinkedList::append(ChainLink* newLink) {
    Node* newNode = new Node(newLink);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->setNext(newNode);
        tail = newNode;
    }
    size++;
}

ChainLink* LinkedList::get(int index) {
    if (index < 0 || index >= size) {
        return nullptr;
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->getNext();
    }
    return current->getData();
}

int LinkedList::getSize() const {
    return size;
}
