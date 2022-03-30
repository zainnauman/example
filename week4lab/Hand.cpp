#include "Hand.h"

Hand::Hand()
{
    cards[MAX_CARDS] = {nullptr};
    this->numStored = 0;
}
Hand::~Hand(){
    delete cards;
    //delete this->numStored;
}
Hand::Hand(Hand& other):
    //find out how to make this copy an array of objects cards(other.cards),
    numStored(other.numStored)
{}
void Hand::addCard(Card* card){
    for (int i = 0; i <MAX_CARDS; i++){
        if (cards[i] == 0){
            cards[i] = card;
        }
    }
}
int Hand::getNumCards()
{
    int count = 0;
    for (int i = 0; i<MAX_CARDS; i++){
        if (cards[i] != 0){
            count++;
        }
    }
    return count;
}

Card* Hand::getCard(int index)
{
return cards[index];
}