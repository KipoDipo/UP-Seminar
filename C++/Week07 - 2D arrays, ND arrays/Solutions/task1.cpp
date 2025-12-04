#include <iostream>

const unsigned MAX_ROWS = 100; 
const unsigned MAX_COLS = 100; 

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';   
    }
}

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

int sumMainDiagonal(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
                sum += matrix[i][j];
        }
    }

    return sum;
}

int sumSecondaryDiagonal(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // if (i + j == cols - 1)
            if (i == cols - 1 - j)
                sum += matrix[i][j];
        }
    }

    return sum;
}


int main()
{
    int matrix[MAX_ROWS][MAX_COLS] {};

    inputMatrix(matrix, 3, 3);

    std::cout << "Sum of Main Diagonal: " << sumMainDiagonal(matrix, 3, 3) << '\n';
    std::cout << "Sum of Secondary Diagonal: " << sumSecondaryDiagonal(matrix, 3, 3) << '\n';

    return 0;
}