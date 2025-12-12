#include <stdio.h>

int sumElements(int* arr, size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void goToLargerSumArray(
    int* arr1, size_t size1,
    int* arr2, size_t size2,
    int** p // !!!
)
{
    int sum1 = sumElements(arr1, size1);
    int sum2 = sumElements(arr2, size2);

    *p = (sum1 < sum2) ? arr1 : arr2;
}

int main(void)
{
    int arr1[3] = {1,2,3};
    int arr2[3] = {10,20,30};

    int* toSmaller = NULL;

    goToLargerSumArray(arr1, 3, arr2, 3, &toSmaller);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", toSmaller[i]);
    }

    return 0;
}