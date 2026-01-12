#include <iostream>

void printIter(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
}

void printRec(const int arr[], int size)
{
    if (size == 0)
        return;
        
    printRec(arr, size - 1);
        
    std::cout << arr[size - 1] << ' ';
}

int main()
{
    int arr[5] {1,2,3,4,5};

    printRec(arr, 5);
}