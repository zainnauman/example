#include <iostream>

void copyString(char* src, char* dest);

int main(void)
{
    char a[] = "hello";
    char b[] = "worldaaa";
    char* pa = a;
    char* pb = b;

    std::cout << pa << std::endl;
    std::cout << pb << std::endl;
    copyString(pa,pb);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

void copyString(char* src, char* dest)
{
    int srcLength = 0;
    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
        srcLength++;
    }
    dest[srcLength] = '\0';
}