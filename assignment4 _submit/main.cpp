#include <iostream>
#include <vector>

#include "card.h"
#include "exchange_card.h"
#include "player.h"
#include "big_boss_card.h"

using namespace std;

int main() {
    Card card = ExchangeCard("card", 100, 200);
    ExchangeCard card2 = ExchangeCard("exchangecard-2", 100, 300);
    BigBossCard card3 = BigBossCard("bigbosscard-3", 100, 300);
    Card card4 = Card("name4", 200, 400);
    Card card5 = Card("name5", 300, 600);
    Card card6 = Card("name6", 400, 500);
    
    std::vector<Card> deck = {card, card2, card3, card4, card5, card6, card4, card4, card4};

    std::vector<Card> oppenentDeck = {card4, card4, card, card2, card3, card4, card5};
    
    Player player = Player(deck, "John");
    Player opponent = Player(oppenentDeck, "Alice");

    

    
    //test a round
    int index_p;
    int index_o;
    Card on_desk_p;
    Card on_desk_o;

    cout << "please enter the card index on player's hand that you want the player play: ";
    cin >> index_p;
    on_desk_p = player.play(index_p);
    cout << "on_desk_p:  "<< on_desk_p << endl;

    cout << "please enter the card index on opponent's hand that you want the opponent play: ";
    cin >> index_o;
    on_desk_o = player.play(index_o);
    cout << "on_desk_o:  "<< on_desk_o << endl;

    
    if(on_desk_p.power(on_desk_o)>0){
        cout << "player wins this round! " << endl;
    }else if(on_desk_o.power(on_desk_p)>0){
        cout << "opponent wins this round! " << endl;
    }else{ //如果平手
        cout << "the two draw " << endl;
    }
    
    

    
    //test card play and draw :
    cout << "the card played: " << player.play(2) << endl;
    cout << "after play one card, the hand size become:  " << player.hand.size() << endl;
    player.draw();
    cout << "draw another card from deck and check the cards on hand:  " << endl;
    player.displayHand();
    



    // big boss 测试
    card3.effect(card4, player, opponent);


    
    // exchange_card测试
    Card opp_card = opponent.deck[1];
    cout <<"opp_card before exchange: " << opp_card << endl;
    card2.effect(opp_card, player, opponent);
    cout <<"opp_card after exchange: " << opp_card << endl;
    

   
   // player.draw()测试
   cout << "before draw a card, the player deck size is: " << player.deck.size() << endl;
   player.draw();
   cout << "after draw a card, the player deck size is: " << player.deck.size() << endl;
   
}