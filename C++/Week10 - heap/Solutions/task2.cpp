#include <iostream>

void printArray(const int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int* resizeArray(const int arr[], int length, int newSize)
{
    int *result = new int[newSize] {};

    // int min = length > newSize ? newSize : length;
    int min = length < newSize ? length : newSize;

    for (int i = 0; i < min; i++)
    {
        result[i] = arr[i];
    }

    return result;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int* copy = resizeArray(arr, 5, 10);

    printArray(arr, 5);
    printArray(copy, 10);

    delete[] copy; // !!!
    
    return 0;
}