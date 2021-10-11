#include <iostream>
#include <string>
#include "deck.h"

using namespace std;

void setting_deck(Deck *deck){
    string type_card, type_card2;
    for (int elements=0; elements < 4; elements++){
        switch(elements){
        case 0:
            type_card = "Paus";
            break;
        case 1:
            type_card = "Ouros";
            break;
        case 2:
            type_card = "Copas";
            break;
        case 3:
            type_card = "Espadas";
            break;

            }
        for (int cols=0; cols < 13; cols++){
            cols = int(cols);
            switch(cols){
            case 10:
                type_card2 = "Valete de ";
                break;
            case 11:
                type_card2 = "Dama de ";
                break;
            case 12:
                type_card2 = "Rei de ";
                break;
            default:
                type_card2 = to_string(cols+1) + " de ";
                break;
            }

            deck->cards[elements][cols] = type_card2 + type_card;
        }
    }

}
