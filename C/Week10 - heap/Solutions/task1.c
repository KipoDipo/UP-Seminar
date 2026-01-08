#include <stdio.h>
#include <stdlib.h>

int* createArray(int size)
{
    return (int*)malloc(size * sizeof(int));
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* copyHalfArray(const int arr[], int size, int* resultSize)
{
    *resultSize = size / 2;
    int* result = createArray(*resultSize);

    for (int i = 0; i < *resultSize; i++)
    {
        result[i] = arr[i];
    }

    return result;
}

int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int halfLength = 0;
    int* halfArray = copyHalfArray(arr, 10, &halfLength);
    
    int quartLength = 0;
    int* quartArray = copyHalfArray(halfArray, halfLength, &quartLength);
    
    printArray(arr, 10);
    printArray(halfArray, halfLength);
    printArray(quartArray, quartLength);

    free(halfArray);
    free(quartArray);

    return 0;
}