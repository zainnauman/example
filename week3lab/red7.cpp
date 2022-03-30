#include <iostream>
#include <string>
#include "Card.h"

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6


int main(void)
{
    int number_colour = 0;
    int number = 0;

	std::cin >> number_colour;
	std::cin >> number;
   
	//Card card1(number, number_colour);

    //card1.printCard(number,number_colour);
    //card1.~Card();

    //this is defining an array on the stack -> pointer to objects on the heap
    //Card cards[5] = {Card(number,number_colour) , Card(number,number_colour), Card(number,number_colour), Card(number,number_colour), Card(number,number_colour)};
    //array itself is on the heap
    //Card * cardheap = new Card[5];

    Card ** cardheaparray = new Card* [5];
    cardheaparray[0] = new Card(number, number_colour);
   
    // for(int i =0; i<5; i++){
    //     std::cout << cards[i] << std::endl;
    // }
    cardheaparray[0]->printCard(number,number_colour);

    return 0;
}
