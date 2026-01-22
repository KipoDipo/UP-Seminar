#include <stdio.h>

void readRec(int* arr, int size)
{
    if (size == 0)
        return;
    
    scanf("%d", arr);

    readRec(arr + 1, size - 1);
}

void printRec(const int* arr, int size)
{
    if (size == 0)
        return;
    
    printf("%d ", *arr);

    printRec(arr + 1, size - 1);
}

int main(void)
{
    int arr[5] = { 0 };

    readRec(arr, 5);
    printRec(arr, 5);
}