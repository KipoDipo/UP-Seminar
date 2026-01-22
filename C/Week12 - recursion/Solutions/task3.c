#include <stdio.h>

long long toBinary(long long number)
{
    if (number == 0)
        return 0;

    return number % 2 + 10 * toBinary(number / 2);
}

int main(void)
{
    printf("%lld", toBinary(13));
    return 0;
}