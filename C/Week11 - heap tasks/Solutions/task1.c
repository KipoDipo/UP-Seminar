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

char* onlyExtension(const char* fileName)
{
    unsigned dot = dotIndex(fileName);
    unsigned length = stringLength(fileName);
    unsigned size = length - dot - 1;

    char* result = malloc(size + 1);

    unsigned i;
    for (i = 0; i < size; i++)
        result[i] = fileName[dot + 1 + i];
    result[i] = '\0';

    return result;
}

int main(void)
{
    char text[] = "minecraft.exe";
    char* ext = onlyExtension(text);
    printf("%s", ext);

    free(ext);
    
    return 0;
}