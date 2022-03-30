#include <iostream>

void doubleArray(int values[], int length);

int main(void)
{
int length = 0;
std::cout << "input the length of the array" << std::endl;
std::cin >> length;

int array[length] = {0};
for (int i =0; i < length; i++){
    std::cout << "add to the array" << std::endl;
    std::cin >> array[i];
}
std::cout << std::endl;
for (int i =0; i < length; i++){
    std::cout << array[i] << std::endl;
}

doubleArray(array,length);
std::cout << std::endl;

for (int i =0; i < length; i++){
    std::cout << array[i] << std::endl;
}
}


void doubleArray(int values[], int length){
    for(int i = 0; i<length; i++){
        values[i] = values[i]*2;
    }
}

