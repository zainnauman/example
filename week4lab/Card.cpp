#include "Card.h"
#include "utils.h"
#include <iostream>

Card::Card()
{
    this->colour = Colour(1);
    this->number = 1;
}

Card::Card(Colour colour, int number)
{
   this->colour = Colour(colour);
   this->number = int(number);
}

Card::Card(Card& other)
{
    this->colour = other.colour;
    this->number = other.number;

}


Card::~Card()
{
   std::cout << "Deconstructer called " << std::endl;
//    delete colour;
//    delete number;
}

Colour Card::getColour(){
   return colour;
}

int Card::getNumber(){
   return number;
}