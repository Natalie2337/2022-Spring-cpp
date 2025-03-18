#include "card.h"
#include "exchange_card.h"
#include <iostream>
using namespace std;



void ExchangeCard::effect(Card& oppenentCard, Player& player, Player& opponent)
{
    int temp;
    temp = oppenentCard.attack;
    oppenentCard.attack = oppenentCard.defense;
    oppenentCard.defense = temp;
}