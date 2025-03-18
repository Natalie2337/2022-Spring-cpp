#include "player.h"
#include <iostream>
using namespace std;

//要注意每次取卡之后都要在deck或者取出卡的地方把那些卡删掉
Player::Player(std::vector<Card>& deck, std::string name)
{
    this->deck = deck;
    this->name = name;    
    for (int i = 0; i < 5; i++)
    {
        this->hand.push_back(deck[i]);
        this->deck.erase(this->deck.begin()+i,this->deck.begin()+i+1);
    }

}

void Player::draw()
{
    this->hand.push_back(this->deck[0]);
    cout << this->hand.back() << endl;
    //draw card from top of the deck

    this->deck.erase(this->deck.begin(),this->deck.begin()+1);
}

Card Player::play(int index)
{
    Card temp;
    temp = this->hand[index];
    this->hand.erase(this->hand.begin()+index,this->hand.begin()+index+1);
    return temp;
    //if(index <= this->hand.size())
    //{
        //return this->hand[index];
    //}.
}

void Player::displayHand()
{
    for (int i = 0; i < this->hand.size(); i++)
    {
        std::cout << this->hand[i] << std::endl;
    }    
}

