#include <stdio.h>

int isPowerOf2(int number)
{
    if (number == 1)
        return 1;
        
    if (number % 2 == 1 || number == 0)
        return 0;

    return isPowerOf2(number / 2);        
}

int main()
{
    printf("%d\n", isPowerOf2(16));
    printf("%d\n", isPowerOf2(8));
    printf("%d\n", isPowerOf2(4));
    printf("%d\n", isPowerOf2(1));
    printf("%d\n", isPowerOf2(0));
    printf("%d\n", isPowerOf2(18));
    printf("%d\n", isPowerOf2(1128));
}