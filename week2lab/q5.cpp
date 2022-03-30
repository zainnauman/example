#include <iostream>
#include <string>

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

class Card 
{
public:
   // TODO: Constructor
   Card(int number, int number_colour, std::string rule);
   // 4 methods to implement
   int getNumber();
   int getColourAsInt();
   std::string getColourAsString(int number_colour);
   std::string getRule();

private:
   // TODO: Fields to store information
   int number;
   int number_colour;

   std::string rule;
};
Card::Card(int number, int number_colour, std::string rule)
{
	this->number = number;
	this->number_colour = number_colour;
	this->rule = rule;

}
int Card::getNumber()
{
	return number;
}

int Card::getColourAsInt()
{
	return number_colour;
}

std::string Card::getColourAsString(int number_colour)
{
	std::string colour = "unknown";
	
	switch(number_colour){
		case(1):
			colour = "red";
			break;
		
				case(2):
			colour = "orange";
			break;
		
				case(3):
			colour = "yellow";
			break;
		
				case(4):
			colour = "green";
			break;
		
				case(5):
			colour = "blue";
			break;
		
				case(6):
			colour = "indigo";
			break;
		
				case(7):
			colour = "violet";
			break;
	}
	return colour;
}

std::string Card::getRule()
{
	return rule;
}
int main(void)
{
   // TODO: Implement making a card.
   //
    int number_colour = 0;
    int number = 0;

	std::cin >> number_colour;
	std::cin >> number;
    //number = (number+1)%7;
   
	Card card1(number, number_colour, "idk");
	
	card1.getColourAsString(number_colour);
	std::cout <<"your card number is: "<< card1.getNumber() << std::endl;
	std::cout <<"your card colour is: " << card1.getColourAsString(number_colour)<<std::endl;
	std::cout <<"your card colour as a colour is: " << number_colour<<std::endl;
    return 0;
}
