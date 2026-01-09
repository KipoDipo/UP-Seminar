#include <stdio.h>

unsigned stringLengthDiff(const char* string)
{
    const char* begin = string;
    while(*string != '\0')
    {
        string++;
    }
    
    // while (*(string++));
    // return string - begin - 1;

    return string - begin;
}

unsigned stringLengthFor(const char* string)
{
    int i;
    for(i = 0; string[i] != '\0' ; i++)
    {
    }
    
    return i;
}

unsigned stringLength(const char* string)
{
    unsigned count = 0;
    while (*string != '\0')
    {
        count++;
        string++;
    }
    return count;
}

int main()
{
    printf("%u\n", stringLength("Hello"));
    printf("%u\n", stringLengthFor("Hello"));
    printf("%u\n", stringLengthDiff("Hello"));
}