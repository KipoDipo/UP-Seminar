#include <stdio.h>

void printRec(const int* arr, int size)
{
    if (size == 0)
        return;
    
    printf("%d ", *arr);

    printRec(arr + 1, size - 1);
}

int main(void)
{
    int arr[5] = {1,2,3,4,5};

    printRec(arr, 5);
}