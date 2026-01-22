#include <stdio.h>

void printStr(const char* str)
{
    if (*str == '\0')
        return;
    
    printStr(str + 1);
    
    printf("%c", *str);
}

int main(void)
{
    printStr("Hello, world");
}