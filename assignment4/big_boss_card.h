#include "card.h"
#include <iostream>
#ifndef BIG_BOSS_H
#define BIG_BOSS_H

class BigBossCard : public Card
{
public:
    std::string name;
    int attack;
    int defense;
    
    virtual void effect(Card& oppenentCard, Player& player, Player& opponent);

    BigBossCard():Card(){}
    BigBossCard(std::string na, int att, int def):Card(na,att,def){
        //name = na;
        //attack = att;
        //defense = def;
    }
    ~BigBossCard(){}
};

#endif