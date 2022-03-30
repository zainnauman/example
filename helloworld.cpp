#include <iostream>
#include <string>


int main(void) {
   std::string name;
   int age;
   std::string DOB;
   std::cin >> name;
   
   std::cin >> age;
   
   std::cin >> DOB;
   std::cout << "Name: " << name << std::endl;
   std::cout << "Age: " << age << std::endl;
   std::cout << "DOB: " << DOB << std::endl;

   return EXIT_SUCCESS;
}

//to compile -> g++ -Wall -Werror -std=c++14 -O -o helloworld helloworld.cpp
//./helloworld