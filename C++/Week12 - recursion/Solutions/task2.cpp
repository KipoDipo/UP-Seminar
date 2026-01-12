#include <iostream>

int findMinRecHelper(int arr[], int size, int min)
{
    if (size == 0)
        return min;
        
    if (arr[size - 1] < min)
        return findMinRecHelper(arr, size - 1, arr[size - 1]);
    else
        return findMinRecHelper(arr, size - 1, min);

    // if (arr[size - 1] < min)
    //     min = arr[size - 1];

    // return findMinRecHelper(arr, size - 1, min);
}

int findMin(int arr[], int size)
{
    return findMinRecHelper(arr, size - 1, arr[size - 1]);
}

int main()
{
    int arr[5] {1,5,-3,2,4};

    std::cout << findMin(arr, 5);
}