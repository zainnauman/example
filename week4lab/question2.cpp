#include <iostream>

int stringLength(char* string);

int main(void){
    char string[] = "hello";
    char* c = string;

    std::cout << stringLength(c) << std::endl;
}

int stringLength(char* string){
    int count = 0;
    for(int i=0; string[i] !='\0'; i++){
        count++;
    }
    return count;
}