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
    
    /*
    //错误版本：
    cout << "opponent.deck.size() "<< opponent.deck.size() << endl;
    for (int i = 0; i < opponent.deck.size(); i++)
    {
        //需要小心，随着我开始erase,opponent.deck.size()也会变化，这就影响了我下标的移动
        std::vector<Card>::iterator iter;
        iter = opponent.deck.begin() + i;
        cout << "opponent.deck["<<i<< "].attack: " << opponent.deck[i].attack << " opp_attack: " << opp_attack << endl;
        cout << "opponent.deck["<<i<< "].defense: " << opponent.deck[i].defense << " opp_defense: " << opp_defense << endl;
        if((opponent.deck[i].attack==opp_attack)||(opponent.deck[i].defense==opp_defense)){
            opponent.deck.erase(iter);
            iter = iter - 1;    
            //cout << "here erase! " << i << endl;
        }
        //iter = iter + 1;
    }       
    cout << "opponent.deck.size() "<< opponent.deck.size() << endl;
    */

   
   
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


