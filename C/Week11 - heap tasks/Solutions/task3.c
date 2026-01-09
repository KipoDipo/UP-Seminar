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

void modifyFileName(char** oldFileName, const char* newString)
{
    char* ext = onlyExtension(*oldFileName); // exe
    unsigned extLength = stringLength(ext); // 3
    unsigned newStringLength = stringLength(newString); // 13 (from "like_a_dragon")
    unsigned dotLength = 1;

    char* result = calloc(newStringLength + dotLength + extLength + 1, sizeof(char) /* 1 1*/);
    
    stringConcat(result, newString);    // like_a_dragon----
    stringConcat(result, ".");          // like_a_dragon.---
    stringConcat(result, ext);          // like_a_dragon.exe
    
    free(ext);
    free(*oldFileName); // !!!
    *oldFileName = result;
}

int main(void)
{
    char* fileName = calloc(1024, sizeof(char));
    stringConcat(fileName, "yakuza.exe"); // fileName -> "yakuza.exe" + empty space
    
    printf("%s\n", fileName);

    modifyFileName(&fileName, "like_a_dragon"); // fileName -> "like_a_dragon.exe" + no empty space
    printf("%s\n", fileName);

    // we mustn't free 'fileName' before any next calls, that is managed INSIDE the function
    modifyFileName(&fileName, "judgment");  // fileName -> "judgment.exe" + no empty space 
    printf("%s", fileName);

    free(fileName);

    return 0;
}