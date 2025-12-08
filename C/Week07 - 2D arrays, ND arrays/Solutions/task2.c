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

int sumRow(int matrix[MAX_ROWS][MAX_COLS], int cols, int row)
{
    int result = 0;
    for (int i = 0; i < cols; i++)
    {
        result += matrix[row][i];
    }
    return result;
}

int sumCol(int matrix[MAX_ROWS][MAX_COLS], int rows, int col)
{
    int result = 0;
    for (int i = 0; i < rows; i++)
    {
        result += matrix[i][col];
    }
    return result;
}


int isMatrixMagic(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    const int magicSum = sumRow(matrix, cols, 0);

    for (int i = 1; i < rows; i++)
    {
        if (magicSum != sumRow(matrix, cols, i))
            return 0;
    }

    for (int i = 0; i < cols; i++)
    {
        if (magicSum != sumCol(matrix, rows, i))
            return 0;
    }

    return 1;
}

int main(void)
{
    int matrix[MAX_ROWS][MAX_COLS] = { 0 };
    int n, m;

    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter M: ");
    scanf("%d", &m);

    inputMatrix(matrix, n, m);

    printf("%d", isMatrixMagic(matrix, n, m));
}