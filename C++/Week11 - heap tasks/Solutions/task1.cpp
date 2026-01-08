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

char* onlyExtension(const char* fileName)
{
    unsigned dot = dotIndex(fileName);
    unsigned length = stringLength(fileName);
    unsigned size = length - dot - 1;

    char* result = new char[size + 1] {};

    for (int i = 0; i < size; i++)
        result[i] = fileName[dot + 1 + i];

    return result;
}

int main()
{
    char text[] = "minecraft.exe";
    char* ext = onlyExtension(text);
    std::cout << ext;

    delete[] ext;
}