#include <stdio.h>

void overflow(void)
{
    overflow();
}

int main(void)
{
    overflow();
    return 0;
}