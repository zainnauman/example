#include <iostream>
#include <string>

#include "Card.h"
#include "utils.h"
#include "Hand.h"

#define NUMBER_CARDS_TO_READ 5

void readOneCard(Colour* colour, int* number);

int main(void) {
   // TODO: Convert to use a Class
   Colour colour = RED;
   int number = 0;
   Hand* hand = new Hand();

//    Card* cards[NUMBER_CARDS_TO_READ];
//    for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
//       cards[i] = nullptr;
//    }

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      //readOneCard(&colour, &number);

      if (!std::cin.eof()) {
         //Create a card and add it to array
         Card* card = new Card(colour, number);
         hand->addCard(card);
  
         // Increment cards read
         ++numRead;
      }

   }

   // When we had array's before - print out all the cards
   for (int i = 0; i < numRead && i < NUMBER_CARDS_TO_READ; ++i) {
      printCard(hand->getCard(i));
   }

   //Cleanup
   for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
      if(hand->getCard(i) != nullptr){
         delete hand->getCard(i);
      }
   }

   return EXIT_SUCCESS;
}

// void readOneCard(Colour* colour, int* number) {
//    std::cin >> *colour;
//    std::cin >> *number;
// }


