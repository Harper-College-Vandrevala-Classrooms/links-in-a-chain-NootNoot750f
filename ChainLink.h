//
// Created by nickh on 11/24/2024.
//

#ifndef CHAINLINK_H
#define CHAINLINK_H
#include <string>
using namespace std;

class ChainLink {
public:
    ChainLink(string color);

    string getColor();


private:
    string color;
};



#endif //CHAINLINK_H
