#pragma once

#include <iostream>
#include <vector>

#include "card.h"

class Player {
   public:
    
    std::vector<Card> deck;
    //std::vector<Card&> deck;
    std::string name;
    std::vector<Card> hand;
    //std::vector<Card&> hand;

    Player(std::vector<Card>& deck, std::string name);

    /**
     * @brief draw card from top of the deck
     * 
     * we consider back of the vector is the top of the deck  
     */
    void draw();

    /**
     * @brief play card in hand of the given index
     * and remove it from hand
     * 
     * we make sure that index is in range
     * 
     * @param index index of card
     * @return Card the card
     */
    Card play(int index);

    /**
     * @brief display all cards in hand, every card is displayed
     * in one line
     * 
     * example:
     * 
     * card1 10 10
     * card2 20 20
     * card3 20 20
     */
    void displayHand();
    virtual ~Player(){}
};