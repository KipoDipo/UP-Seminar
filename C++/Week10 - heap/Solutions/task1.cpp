#include <iostream>

void printArray(const int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int* halveArray(const int arr[], int length)
{
    int *result = new int[length / 2];

    for (int i = 0; i < length / 2; i++)
    {
        result[i] = arr[i];
    }

    return result;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int* copy = halveArray(arr, 5);

    arr[0] = 9999;

    printArray(arr, 5);
    printArray(copy, 5/2);

    delete[] copy; // !!!
    
    return 0;
}