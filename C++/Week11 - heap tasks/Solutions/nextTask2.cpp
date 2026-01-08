#include <iostream>

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

char* concatNewString(
    const char* string1,
    const char* string2
)
{
    unsigned length1 = stringLength(string1);
    unsigned length2 = stringLength(string2);

    char* result = new char[length1 + length2 + 1] {};

    stringConcat(result, string1);
    stringConcat(result, string2);

    return result;
}

int main()
{
    char* concat1 = concatNewString("Hello", ", world!");
    char* concat2 = concatNewString(concat1, concat1);
    
    std::cout << concat2;
    delete[] concat1;
    delete[] concat2;
}