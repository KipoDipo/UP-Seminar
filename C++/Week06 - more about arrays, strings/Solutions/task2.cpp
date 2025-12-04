#include <iostream>

void reverse(int arr[], unsigned size,
             unsigned begin, unsigned end)
{
    unsigned count = (end - begin) / 2;

    for (unsigned i = 0; i < count; i++)
    {
        int temp = arr[begin + i];
        arr[begin + i] = arr[end - 1 - i];
        arr[end - 1 - i] = temp;
    }

    // Reverse the whole array
    // for (unsigned i = 0; i < (size / 2); i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[size - 1 - i];
    //     arr[size - 1 - i] = temp;
    // }
}

void rotateLeft(int arr[], unsigned size, int k)
{
    k %= size;

    reverse(arr, size, 0, size);
    reverse(arr, size, 0, size - k);
    reverse(arr, size, size - k, size);
}

void printArray(const int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    int arr[] = {1,2,3,4,5};
    unsigned size = 5;

    printArray(arr, size);
    
    rotateLeft(arr, size, 0);
    
    printArray(arr, size);
}