#include <stdio.h>
#define ROWS 3
#define COLS 4

// Alternatively:
// const int ROWS = 3;
// const int COLS = 4;

void printMatrix(const int matrix[ROWS][COLS])
{
    for (int y = 0; y < ROWS; y++)
    {
        for (int x = 0; x < COLS; x++)
        {
            printf("%d ", matrix[y][x]);
        }
        printf("\n");
    }
}

int findMaxInMatrix(const int matrix[ROWS][COLS])
{
    int max = matrix[0][0];

    for (int y = 0; y < ROWS; y++)
    {
        for (int x = 0; x < COLS; x++)
        {
            if (matrix[y][x] > max)
            {
                max = matrix[y][x];
            }
        }
    }

    return max;
}

int main(void)
{
    int matrix[ROWS][COLS] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2}
    };

    printMatrix(matrix);
    printf("%d", findMaxInMatrix(matrix));
}