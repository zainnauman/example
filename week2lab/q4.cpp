#include <iostream>

bool getChar(char* c);

int main(void)
{
	char c = 'a';
	char* cPnt = &c;
	getChar(cPnt);
}

bool getChar(char* c)
{
	char characters[5];
	characters[5] = '\0';
	for (int i =0; i<4; i++){
		std::cin >> *c;
		characters[i] = *c;
	}
	if (*characters != '\0'){
		return true;
	}
	else{
		return false;
	}
	for (int i = 0; i<5; i++){
		std::cout << characters[i] << std::endl;
}
}
