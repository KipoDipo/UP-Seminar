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

void resizeString(char*& string, unsigned newSize)
{
    char* result = new char[newSize + 1] {}; // '\0'
    unsigned originalLength = stringLength(string);

    unsigned min = (originalLength < newSize) ? originalLength : newSize;

    for (int i = 0; i < min; i++)
        result[i] = string[i];

    delete[] string;
    string = result;
}

int main()
{
    char* dynamicString = copyNewString("Hello, world");

    resizeString(dynamicString, 5);

    std::cout << dynamicString;

    delete[] dynamicString;
}