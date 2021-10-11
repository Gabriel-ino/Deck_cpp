#include <iostream>
#include "deck.h"
#include <time.h>

using namespace std;

static void set_player_name(Player *player){
    cout << "Diga seu nome: ";
    cin >> player->name;
    cout << "Olá, " << player->name << endl;

}

static void set_player_hand(Player *player, Deck *deck){
    for (int counter=0; counter < 7; counter++){
        int rand_line = rand()%4;
        int rand_column = rand()%13;

        while (deck->cards[rand_line][rand_column] == ""){
            rand_line = rand()%4;
            rand_column = rand()%13;
        }
        player->hand[counter] = deck->cards[rand_line][rand_column];
        deck->cards[rand_line][rand_column] = "";

    }
}

void settings(Player *player, Deck *deck){
    srand((unsigned)time(NULL));
    set_player_name(player);
    set_player_hand(player, deck);

}
