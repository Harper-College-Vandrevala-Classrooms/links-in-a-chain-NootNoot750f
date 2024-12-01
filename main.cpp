//
// Created by nickh on 11/24/2024.
//

#include <iostream>
#include "LinkedList.h"
#include "ChainLink.h"
using namespace std;

int main() {
    LinkedList list;

    ChainLink linkRed("Red");
    ChainLink linkGreen("Green");
    ChainLink linkYellow("Yellow");
    ChainLink linkBlue("Blue");

    list.append(&linkRed);
    list.append(&linkGreen);
    list.append(&linkYellow);
    list.append(&linkBlue);

    ChainLink* linkAt0 = list.get(0);
    if (linkAt0 != nullptr) {
        cout << "Color at index 0: " << linkAt0->getColor() << endl;
    }

    ChainLink* linkAt1 = list.get(1);
    if (linkAt1 != nullptr) {
        cout << "Color at index 1: " << linkAt1->getColor() << endl;
    }

    ChainLink* linkAt2 = list.get(2);
    if (linkAt2 != nullptr) {
        cout << "Color at index 2: " << linkAt2->getColor() << endl;
    }

    return 0;



}