#include <stdio.h>
#include <stdlib.h>

unsigned stringLength(const char* string)
{
    const char* begin = string;
    while(*string != '\0')
    {
        string++;
    }
    
    return string - begin;
}

void stringCopy(char* destination, const char* source)
{
    while (*source != '\0')
    {
        *destination = *source;

        destination++;
        source++;
    }
    *destination = '\0';
}

char** inputStrings(int count)
{
    char** result = malloc(count * sizeof(char*));
    
    for (int i = 0; i < count; i++)
    {
        char buffer[5000];
        scanf("%s", buffer); 

        unsigned length = stringLength(buffer);
        result[i] = malloc(length * sizeof(char) + 1);
        stringCopy(result[i], buffer);
    }

    return result;
}

void freeStrings(char** strings, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(strings[i]);
    }
    free(strings);
}


int main(void)
{
    int count = 0;
    scanf("%d", &count);

    char** strings = inputStrings(count);

    for (int i = 0; i < count; i++)
    {
        printf("----%s----\n", strings[i]);
    }

    freeStrings(strings, count);
}