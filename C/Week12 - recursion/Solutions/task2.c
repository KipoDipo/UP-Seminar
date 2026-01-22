#include <stdio.h>

int findMinHelper(const int arr[], int size, int min)
{
    if (size == 0)
        return min;

    int smallest = *arr < min ? *arr : min;

    return findMinHelper(arr + 1, size - 1, smallest);
}

int findMin(const int arr[], int size)
{
    return findMinHelper(arr + 1, size - 1, arr[0]);
}

// Var 2:

int* findMin2Helper(int arr[], int size, int* min)
{
    if (size == 0)
        return min;

    min = *arr < *min ? arr : min;

    return findMin2Helper(arr + 1, size - 1, min);
}

int* findMin2(int arr[], int size)
{
    return findMin2Helper(arr + 1, size - 1, &arr[0]);
}



int main(void)
{
    int arr[6] = {5, -23, 1, 3, 2, 4};

    printf("%d", *findMin2(arr, 6));
}