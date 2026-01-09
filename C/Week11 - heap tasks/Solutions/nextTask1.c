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

// -----

void resizeString(char** string, unsigned newSize)
{
    // 1. create
    char* result = malloc(newSize + 1);

    // 2. copy
    unsigned size = stringLength(*string);

    unsigned smaller = size < newSize ? size : newSize;

    unsigned i;
    for (i = 0; i < smaller; i++)
    {
        result[i] = (*string)[i];
    }
    result[i] = '\0';

    // 3. delete
    free(*string);

    // 4. reassign
    *string = result;
}

void resizeStringAlternative(char** string, unsigned newSize)
{
    // 1. create
    char* result = malloc(newSize + 1);

    // 2. copy
    unsigned i;
    for (i = 0; i < newSize && (*string)[i] != '\0'; i++)
    {
        result[i] = (*string)[i];
    }
    result[i] = '\0';

    // 3. delete
    free(*string);

    // 4. reassign
    *string = result;
}

int main(void)
{
    char* str = createString("Hello, world");

    resizeString(&str, 1000);
    resizeStringAlternative(&str, 5);

    printf("%s", str);

    free(str);

    return 0;
}