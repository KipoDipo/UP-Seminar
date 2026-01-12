#include <iostream>

void printStringReverse(const char* str)
{
    if (*str == '\0')
        return;
    
    printStringReverse(str + 1);
    
    std::cout << *str;
}

int main()
{
    printStringReverse("Hello, world!");
}