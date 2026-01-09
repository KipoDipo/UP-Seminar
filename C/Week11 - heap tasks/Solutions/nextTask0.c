#include <stdio.h>
#include <stdlib.h>

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

char* createString(const char* string)
{
    unsigned length = stringLength(string);

    char* result = malloc(length + 1);

    stringCopy(result, string);

    return result;
}

int main(void)
{
    char* dynamicString = createString("Hello, world");

    printf("%s", dynamicString);

    free(dynamicString);

    return 0;
}