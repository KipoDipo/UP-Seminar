#include <stdio.h>

void stringCopyFor(char* destination, const char* source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

void stringCopyWhileBasic(char* destination, const char* source)
{
    while (*source != '\0')
    {
        *destination = *source;

        destination++;
        source++;
    }
    *destination = '\0';
}

void stringCopyWhileCool(char* destination, const char* source)
{
    while ((*(destination++) = *(source++)));
}

int main(void)
{
    char str1[] = "AAAAAAAAAAAAAAAAAAAAAAAAA";
    char str2[] = "Hello";

    stringCopyWhileCool(str1, str2);

    printf("%s", str1);

    return 0;
}