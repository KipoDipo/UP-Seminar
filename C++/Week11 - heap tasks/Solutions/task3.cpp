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

void modifyFileName(char*& oldFileName, const char* newString)
{
    char* ext = onlyExtension(oldFileName); // exe
    unsigned extLength = stringLength(ext); // 3
    unsigned newStringLength = stringLength(newString); // 13 (from "like_a_dragon")
    unsigned dotLength = 1;

    char* result = new char[newStringLength + dotLength + extLength + 1];
    
    stringConcat(result, newString);    // like_a_dragon----
    stringConcat(result, ".");          // like_a_dragon.---
    stringConcat(result, ext);          // like_a_dragon.exe
    
    delete[] ext;
    delete[] oldFileName; // !!!
    oldFileName = result;
}

int main()
{
    char* fileName = new char[1024] {};
    stringConcat(fileName, "yakuza.exe"); // fileName -> "yakuza.exe" + empty space
    
    std::cout << fileName << '\n';

    modifyFileName(fileName, "like_a_dragon"); // fileName -> "like_a_dragon.exe" + no empty space
    std::cout << fileName << '\n';

    // we mustn't delete 'fileName' before any next calls, that is managed INSIDE the function
    modifyFileName(fileName, "judgment");  // fileName -> "judgment.exe" + no empty space 
    std::cout << fileName;

    delete[] fileName;
}