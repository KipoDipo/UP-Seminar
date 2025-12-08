#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100

// Alternatively:
// const int MAX_ROWS = 100;
// const int MAX_COLS = 100;

void printMatrix(const int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < cols; x++)
        {
            printf("%d ", matrix[y][x]);
        }
        printf("\n");
    }
}

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < cols; x++)
        {
            scanf("%d", &matrix[y][x]);
        }
    }
}

int sumMainDiagonal(int matrix[MAX_ROWS][MAX_COLS], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {  
        result += matrix[i][i];
    }
    return result;
}

int sumSecondaryDiagonal(int matrix[MAX_ROWS][MAX_COLS], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {  
        result += matrix[i][n - 1 - i];
    }
    return result;
}

int main(void)
{
    int matrix[MAX_ROWS][MAX_COLS] = {0};
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    inputMatrix(matrix, n, n);

    printf("\n\n");

    printf("Sum of Main Diagonal: %d", sumMainDiagonal(matrix, n));
    printf("\nSum of Secondary Diagonal: %d",  sumSecondaryDiagonal(matrix, n));
}