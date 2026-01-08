#include <iostream>
#include <cstring>

unsigned stringLength(const char* str)
{
    unsigned counter = 0;
    for (unsigned i = 0; str[i] != '\0'; i++)
        counter++;

    return counter;
}

void stringConcat(char* destination, const char* source)
{
    unsigned length = stringLength(destination);
    
    unsigned i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[length + i] = source[i];
    }
    destination[length + i] = '\0';
}

/*
Alternatively:

void stringConcat(char* destination, const char* source)
{
    while (*destination != '\0')
    {
        destination++;
    }

    while (*source != '\0')
    {
        *destination = *source;
    
        destination++;
        source++;
    }

    *destination = '\0';
}
*/

int main()
{
    char buffer[1024] = "Hello";
    char string[] = ", world";

    stringConcat(buffer, string);

    std::cout << buffer << '\n';
}