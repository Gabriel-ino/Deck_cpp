#include <iostream>
#include <typeinfo>
#include <string>
#include "deck.h"
#include <ctype.h>

void clearScreen();
void make_move(Player *player);


using namespace std;

static bool check_cards(Player *player, int c1, int c2, int c3){
   char first_val = player->hand[c1][0];
   if (player->hand[c2][0] != first_val || player->hand[c3][0] != first_val){
    return false;
   }else{
       return true;
   }

}

static void show_cards(Player *player){
    for (int c=0; c < 7; c++){
        cout << c+1 << " - " << player->hand[c] << endl;
    }
}

static void verify_cards(Player *player){
    string type_carts[13];
    register int c1,c2,c3;
    show_cards(player);

    cout << "Escolha três cartas e tecle ENTER: ";
    cin >> c1 >> c2 >> c3;
    cout << c1 << c2 << c3;
    if(check_cards(player, c1, c2, c3)){
        player->hand[c1] = "";
        player->hand[c2] = "";
        player->hand[c3] = "";
        show_cards(player);
    }
    else{
        cout << "Você não pode jogar essa combinação";
        clearScreen();
        make_move(player);

    }


}




void make_move(Player *player){
    int *option = new int;
    int *aux = new int;
    show_cards(player);


    cout << "O que você quer fazer? " << endl << endl << "1 - Jogar cartas" << endl << "2 - Puxar carta" << endl << "3 - Passar a vez" << endl;
    cin >> *option;
    while (*option < 1 || *option > 3 || typeid(*option) != typeid(*aux)){
        cout << "Digite um valor válido!";
        cin >> *option;
    }
    clearScreen();
    switch(*option){
    case 1:
        verify_cards(player);
        break;
    case 2:
        break;
    default:
        break;
    }


}

void playing(Player *player, Deck *deck){
    make_move(player);


}
