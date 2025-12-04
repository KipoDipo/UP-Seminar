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

int maxElem(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int max = matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
    }

    return max;
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS] {};

    inputMatrix(matrix, 3, 3);

    printMatrix(matrix, 3, 3);

    std::cout << maxElem(matrix, 3, 3);
    


    return 0;
}