#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void) {
   string name;
   int age;
   string DOB;
   cin >> name;
   cout << "Name: " << name << endl;
   cin >> age;
   cout << "Age: " << age << endl;
   cin >> DOB;
   cout << "DOB: " << DOB << endl;

   return EXIT_SUCCESS;
}

//to compile -> g++ -Wall -Werror -std=c++14 -O -o helloworld helloworld.cpp
//./helloworld