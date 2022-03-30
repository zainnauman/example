#include "Card.h"
#include <iostream>

Card::Card(int number, int number_colour)
{
	this->number = number;
	this->number_colour = number_colour;
}
Card::~Card()
{
}
int Card::getNumber()
{
	return number;
}

int Card::getColourAsInt()
{
	return number_colour;
}

std::string Card::getColourAsString()
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
    std::string rule = "unknown";
	
	switch(number_colour){
		case(1):
			rule = "HIGHEST CARD";
			break;
		
				case(2):
			rule = "CARDS OF ONE NUMBER";
			break;
		
				case(3):
			rule = "CARDS OF ONE COLOUR";
			break;
		
				case(4):
			rule = "EVEN CARDS";
			break;
		
				case(5):
			rule = "CARDS OF ALL DIFFERENT COLOURS";
			break;
		
				case(6):
			rule = "CARDS THAT FORM A RUN (consecutive cards)";
			break;
		
				case(7):
			rule = "CARDS BELOW 4";
			break;

            default:
            rule = "try again";
	}
    	return rule;
}

void Card::printCard(int number, int number_colour)
{
	std::cout <<"your card number is: "<< number << std::endl;
	std::cout <<"your card colour is: " <<this->getColourAsString() <<std::endl;
    std::cout <<"the rule for this card is: "<< this->getRule() << std::endl;
}