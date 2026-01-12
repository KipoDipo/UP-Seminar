#include <iostream>

bool isAscending(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[size - 1] >= arr[size - 2])
        return isAscending(arr, size - 1);
    else
        return false;
}

int main()
{
    int arr1[] {1,2,3,4,5};
    int arr2[] {1,2,4,3,5};

    std::cout << std::boolalpha;

    std::cout << isAscending(arr1, 5) << '\n';
    std::cout << isAscending(arr2, 5) << '\n';

}