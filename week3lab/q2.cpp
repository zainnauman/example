#include <iostream>

int main(void){
    typedef int Integer;
    Integer a = 10;
    std::cout << "a) " << a << std::endl;

    typedef char character;
    character b = 'b';
    std::cout <<"b) "<< b << std::endl;

    typedef std::string string;
    string c = "this is part c";
    std::cout<<"c) "<< c << std::endl;

    typedef double dubarr[];
    dubarr d= {0,0,0,0,'\0'};
    std::cout << "d) ";
    for(int i = 0;i < 5; i++){
        std::cout << d[i] << ", ";
    }
    std::cout << std::endl;

    //take a look at this - i dont know how to do it
    typedef double* dubarpnt[];
    dubarpnt e = {0,0,0,0,0};
    std::cout << "e) ";
    for(int i = 0;i < 5; i++){
        std::cout<<e[i] << ",";
    }  
    std::cout << std::endl;
    return 0;

}