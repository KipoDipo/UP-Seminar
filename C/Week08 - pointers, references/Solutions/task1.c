#include <stdio.h>

int* find(int *arr, size_t size, int k)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == k)
        {
            return &arr[i];
        }
    }
    return NULL;
}

int main(void)
{
    int arr[] = {1,2,3,4,5,7};

    int *ptr = find(arr, 6, 6);

    // find may return NULL
    // if (ptr)
    if (ptr != NULL)
    {
        printf("%d\n", *ptr);
    }
    else
    {
        printf("Not found :(\n");
    }

    return 0;
}