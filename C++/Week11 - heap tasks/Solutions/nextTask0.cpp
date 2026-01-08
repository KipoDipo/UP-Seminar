#include <iostream>

unsigned stringLength(const char* str)
{
    unsigned counter = 0;
    for (unsigned i = 0; str[i] != '\0'; i++)
        counter++;

    return counter;
}

void stringCopy(char* destination, const char* source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

char* copyNewString(const char* source)
{
    unsigned length = stringLength(source);

    char* result = new char[length + 1];
    stringCopy(result, source); 
    
    return result;
}

int main()
{
    char str[] = "hello, world";

    char* copy = copyNewString(str);

    std::cout << str << '\n';
    std::cout << copy;

    delete[] copy;
}