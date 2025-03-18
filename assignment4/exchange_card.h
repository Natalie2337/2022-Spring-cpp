#include "card.h"
#include <iostream>
#ifndef EXCHANGE_H
#define EXCHANGE_H

class ExchangeCard : public Card
{
public:
    std::string name;
    int attack;
    int defense;
    virtual void effect(Card& oppenentCard, Player& player, Player& opponent);
    ExchangeCard():Card(){};
    ExchangeCard(std::string na, int att, int def):Card(na,att,def){
        //name = na;
        //attack = att;
        //defense = def;
    }
    ~ExchangeCard(){}
};

#endif