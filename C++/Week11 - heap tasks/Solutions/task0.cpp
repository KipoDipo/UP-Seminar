#include <iostream>

unsigned stringLength(const char* str)
{
    unsigned counter = 0;
    for (unsigned i = 0; str[i] != '\0'; i++)
        counter++;

    return counter;
}

unsigned dotIndex(const char* fileName)
{
    unsigned length = stringLength(fileName);

    for (int i = length - 1; i >= 0; i--)
    {
        if (fileName[i] == '.')
            return i;
    }
    return 0;
}

char* onlyName(const char* fileName)
{
    unsigned newLength = dotIndex(fileName);

    char* result = new char[newLength + 1] {};

    for (int i = 0; i < newLength; i++)
        result[i] = fileName[i];

    return result;
}

int main()
{
    char* name = onlyName("minecraft.exe");

    std::cout << name;

    delete[] name;
}