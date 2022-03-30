#include <iostream>

int main(void){
    int* a = new int(10);
    std::cout <<"a) " <<*a << std::endl;
    std::cout <<"a) " << a << std::endl;
    a = nullptr;
    delete a;

    char* b = new char('b');
    std::cout << "b) " << *b << std::endl;
    std::cout <<"b) " << b << std::endl;
    b = nullptr;
    delete b;

    
    std::string* c = new std::string("this is for question c");
    std::cout << "c) " << *c << std::endl;
    std::cout << "c) " << c << std::endl;
    c = nullptr;
    delete c;
    

    double* d = new double[5];
    *d = {3};
    std::cout << "d) ";
    for (int i =0; i < 5; i++){
        std::cout <<d[i] <<", ";
    }
    std::cout << std::endl;
    d = nullptr;
    delete d;

    //find out how to declare an array of pointers in the heap
    float* e = new float[6];
    **e = {3};
    std::cout << "e) ";
    for (int i =0; i < 6; i++){
        std::cout <<e[i] <<", ";
    }
    std::cout << std::endl;
    e = nullptr;
    delete e;
    
    return 0;
}