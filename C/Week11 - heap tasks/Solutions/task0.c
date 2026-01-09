#include <stdio.h>
#include <stdlib.h>

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

    char* result = malloc(newLength + 1);

    unsigned i;
    for (i = 0; i < newLength; i++)
        result[i] = fileName[i];
    result[i] = '\0';
    
    return result;
}

int main(void)
{
    char* name = onlyName("minecraft.exe");

    printf("%s", name);

    free(name);

    return 0;
}