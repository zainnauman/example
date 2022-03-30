#include <iostream>

int main(void){
    int x = 12;
    int* ptr = &x;

    std::cout << x << "\t" << ptr << std::endl;

    *ptr = 25; // dereferencing - changing value of variable via the pointer
    std::cout <<"\n" << x << "\t"<< ptr << std::endl;

    std::cout << *ptr<<std::endl;
}