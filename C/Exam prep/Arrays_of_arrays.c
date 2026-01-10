#include <stdio.h>
#include <stdlib.h>

int** createMatrix(int rows, int cols)
{
    int** result = malloc(rows * sizeof(int*));
    // [*][*][*][*][*][*][*][*][*][*]

    for (int i = 0; i < rows; i++)
    {
        result[i] = malloc(cols * sizeof(int));
    }

    return result;
}

void freeMatrix(int** matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

void fillMatrix(int** matrix, int rows, int cols, int element)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = element;
        }
    }
}

void printMatrix(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void createMatrixHard(int*** matrix, int rows, int cols)
{
    *matrix = malloc(rows * sizeof(int*));
    // [*][*][*][*][*][*][*][*][*][*]

    for (int i = 0; i < rows; i++)
    {
        (*matrix)[i] = malloc(cols * sizeof(int));
    }
}

int main(void)
{
    int rows = 10;
    int cols = 5;

    int** mat;
    createMatrixHard(&mat, rows, cols);

    fillMatrix(mat, rows, cols, 6);
    mat[2][3] = 0;
    printMatrix(mat, rows, cols);

    freeMatrix(mat, rows);

    return 0;
}