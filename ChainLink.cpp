//
// Created by nickh on 11/24/2024.
//
#include <string>
#include "ChainLink.h"
using namespace std;
ChainLink::ChainLink(string color) {
    this->color = color;
}
string ChainLink::getColor() {
    return this->color;
}
