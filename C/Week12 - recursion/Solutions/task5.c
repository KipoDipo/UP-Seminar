#include <stdio.h>

int isAscending(const int arr[], int size)
{
    if (size == 1 || size == 0)
        return 1;

    if (*arr > *(arr + 1))
        return 0;

    return isAscending(arr + 1, size - 1);
}

int main(void)
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,4,3,5};

    printf("%d\n", isAscending(arr1, 5));
    printf("%d\n", isAscending(arr2, 5));
}