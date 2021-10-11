#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

struct Deck{
    string cards[4][13];
};

struct Player{
    string name;
    string hand[7];
    int score = 0;
};


#endif // DECK_H_INCLUDED
