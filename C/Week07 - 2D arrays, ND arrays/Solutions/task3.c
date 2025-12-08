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

void printCoordsOfNum(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int number)
{
    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < cols; x++)
        {
            if (matrix[y][x] == number)
            {
                printf("(%d, %d)", x, y);
            }
        }
    }
}

int main(void)
{
    int matrix[MAX_ROWS][MAX_COLS] = {0};
    int n, m;

    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter M: ");
    scanf("%d", &m);

    inputMatrix(matrix, n, m);

    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printCoordsOfNum(matrix, n, m, number);
}