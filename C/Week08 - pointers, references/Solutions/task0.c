#include <stdio.h>

void swap(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);

    printf("%d %d", a, b);

    return 0;
}