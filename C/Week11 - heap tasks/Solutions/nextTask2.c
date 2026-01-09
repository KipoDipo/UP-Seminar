#include <stdio.h>
#include <stdlib.h>

unsigned stringLength(const char* str)
{
    unsigned counter = 0;
    for (unsigned i = 0; str[i] != '\0'; i++)
        counter++;

    return counter;
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

char* concatNewString(
    const char* string1,
    const char* string2
)
{
    unsigned length1 = stringLength(string1);
    unsigned length2 = stringLength(string2);

    char* result = calloc(length1 + length2 + 1, sizeof(char) /* 1 */);
    /*
    We used calloc because it guarantees that the array is filled with 0 ('\0')
    If we use malloc, we have to:
    
    char* result = malloc(length1 + length2 + 1);
    result[0] = '\0'; // ! -> because stringConcat searches for the first '\0', but malloc doesn't guarantee that
    */

    stringConcat(result, string1);
    stringConcat(result, string2);

    return result;
}

int main(void)
{
    char* concat1 = concatNewString("Hello", ", world!");
    char* concat2 = concatNewString(concat1, concat1);
    
    printf("%s", concat2);
    free(concat1);
    free(concat2);

    return 0;
}