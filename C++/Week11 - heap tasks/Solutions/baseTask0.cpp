#include <iostream>

unsigned stringLength(const char* str)
{
    unsigned counter = 0;
    for (unsigned i = 0; str[i] != '\0'; i++)
        counter++;

    return counter;
}

/*
Alternatively:

unsigned stringLength(const char* str)
{
    const char* curr = str;
    
    while (*curr != '\0')
    {
        curr++;
    }

    return curr - str;
}

Or...: 

unsigned stringLength(const char* str)
{
    int counter = 0;
    while (str[counter++]);
    return counter - 1;
}
*/



int main()
{
    std::cout << stringLength("Hello");
}