#include <iostream>
#include <cstring>

void stringCopy(char* destination, const char* source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

/*
Alternatively:

void stringCopy(char* destination, const char* source)
{
    while (*source != '\0')
    {
        *destination = *source;
        
        destination++;
        source++;
    }
    *destination = '\0';
}

Or...:

void stringCopy(char* destination, const char* source)
{
    while (*(destination++) = *(source++));
}

*/
int main()
{
    char buffer[1024] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";
    char string[] = "Hello, world";

    stringCopy(buffer, string);

    std::cout << buffer << '\n';
    std::cout << string;
}