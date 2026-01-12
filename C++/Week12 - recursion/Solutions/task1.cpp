#include <iostream>

void printRec(const int arr[], int size)
{
    if (size == 0)
        return;
        
    printRec(arr, size - 1);
        
    std::cout << arr[size - 1] << ' ';
}

void inputArrayIter(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void inputArrayRec(int arr[], int size)
{
    if (size == 0)
        return;

    inputArrayRec(arr, size - 1);
    
    std::cin >> arr[size - 1];
}

int main()
{
    int arr[5];
    inputArrayRec(arr, 5);

    printRec(arr, 5);
}