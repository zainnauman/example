#include <iostream>
#include <string>

int main(void)
{
    for (int i = 1; i<=6 ; ++i){
    std::cout << "\n"; 
        for (int j = 1; j <=i; ++j){
                std::cout << "*";
            for(int k = 6; k<= i; --k){
                std::cout << " ";
            }
        } 
    }
    std::cout << "\n";
    return EXIT_SUCCESS;
}