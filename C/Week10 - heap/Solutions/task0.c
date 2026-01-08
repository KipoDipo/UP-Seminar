#include <stdio.h>
#include <stdlib.h>

int* copyArray(const int arr[], int size)
{
    int* result = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        result[i] = arr[i];
    }

    return result;
}

int main(void)
{
    int arr[5] = {1,2,3,4,5};

    int* copy = copyArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", copy[i]);
    }

    free(copy);
    return 0;
}