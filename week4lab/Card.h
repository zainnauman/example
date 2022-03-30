
#ifndef CARD_H
#define CARD_H

#include <string>

enum Colour{
RED,    
ORANGE,
YELLOW, 
GREEN,  
BLUE,   
INDIGO, 
VIOLET,
};

class Card {
public:
   Card();
   Card(Colour colour, int number);
   Card(Card& other);
   ~Card();

   Colour getColour();
   int getNumber();
   std::string getRule();

   std::string colourAsString();

private:
   Colour   colour;
   int      number;
};


#endif // CARD_H
