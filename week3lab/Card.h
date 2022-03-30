#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card 
{
public:
   // TODO: Constructor
   Card(int number, int number_colour);
   // 4 methods to implement
   ~Card();
   int getNumber();
   int getColourAsInt();
   std::string getColourAsString();
   std::string getRule();
   void printCard(int number, int number_colour);

private:
   // TODO: Fields to store information
   int number;
   int number_colour;
   std::string rule;
};

#endif //CARD_H