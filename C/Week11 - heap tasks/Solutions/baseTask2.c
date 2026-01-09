#include <stdio.h>

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

int main(void)
{
    char buffer[1024] = {0};

    stringConcat(buffer, "Hello, ");
    stringConcat(buffer, "World");
    stringConcat(buffer, "!!!!");
    stringConcat(buffer, " :DDDD");

    printf("%s", buffer);

    return 0;
}