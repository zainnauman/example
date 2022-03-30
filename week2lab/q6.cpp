#include <iostream>

void swap(int* a, int* b);

int main(void){
	int a = 3;
	int b = 4;
	int* ap = &a;
	int* bp = &b;
	std::cout << a << b << std::endl;
	swap(ap, bp);
	std::cout << a << b << std::endl;
	
}
void swap(int* a, int* b) {
int tmp = *a;
*a = *b;
*b = tmp;
}
