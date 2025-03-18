#include "card.h"
#include <iostream>
using namespace std;

Card::Card(std::string na, int att, int def){
    name = na;
    attack = att;
    defense = def;
}

double Card::power(Card opponentCard){
    double pow = (this->attack- opponentCard.defense)/2;
    if(pow>=0) {
        return (this->attack- opponentCard.defense)/2;
        // cout << "this round win! " << endl;
    }
    else return 0;
}

void Card::effect(Card& oppenentCard, Player& player, Player& opponent){ }

std::ostream & operator << (std::ostream & os, const Card& card){
    os << card.name << " " << card.attack << " " <<card.defense;
    return os;
};

