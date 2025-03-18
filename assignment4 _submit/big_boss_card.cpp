#include "card.h"
#include "player.h"
#include "big_boss_card.h"
#include <iostream>
using namespace std;

void BigBossCard::effect(Card& oppenentCard, Player& player, Player& opponent)
{
    //cout << "opponent.deck.size() "<< opponent.deck.size() << endl;
    // add the attack and defense
    int opp_attack = oppenentCard.attack;
    int opp_defense = oppenentCard.defense;

    //cout << "opponent attack " << opp_attack << " opponent defense " << opp_defense <<endl;
    for (int i = 0; i < player.deck.size(); i++)
    {
        player.deck[i].attack += opp_attack;
        player.deck[i].defense += opp_defense;
        //cout << "new player deck " << i << "  "<<player.deck[i] <<endl;
    }


    // remove the cards in opponents' deck that has the same attack or defense
    
    //cout << "opponent.deck.size() "<< opponent.deck.size() << endl;
    std::vector<Card>::iterator iter;
    iter = opponent.deck.begin();
    for (;iter < opponent.deck.end();iter++)
    {   Card temp = *(iter);
        //cout << temp.attack << endl;
        if((temp.attack==opp_attack)||(temp.defense==opp_defense)){
            opponent.deck.erase(iter);
            iter--;
        }
    }       
    //cout << "opponent.deck.size() "<< opponent.deck.size() << endl;
 
    
}


