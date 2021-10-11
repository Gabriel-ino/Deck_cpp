#include <iostream>
#include <new>
#include <locale.h>

//Incluindo headers personalizados com o objeto deck e jogador, além de função para limpar tela
#include "deck.h"
#include "clear_screen.h"

extern void setting_deck(Deck *deck);
extern void settings(Player *player, Deck *deck);
extern void playing(Player *player, Deck *deck);

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    Deck *deck = new Deck;
    Player *player = new Player;

    setting_deck(deck);

    /*for(int lines=0; lines < 4; lines++){
        for (int columns=0; columns < 13; columns++){
            cout << deck->cards[lines][columns] << endl;
        }
    }*/

    settings(player, deck);
    clearScreen();

    cout << "Suas cartas:" << endl;

    for (int c=0; c < 7; c++){
        cout << player->hand[c] << endl;
    }

    clearScreen();

    playing(player, deck);



    return 0;

}
