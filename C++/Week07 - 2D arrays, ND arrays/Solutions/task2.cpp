#include <iostream>

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

bool isSumOfRowsSame(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int checksum = 0;
    for (int j = 0; j < cols; j++)
    {
        checksum += matrix[0][j];
    }

    for (int i = 1; i < rows; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < cols; j++)
        {
            sumRow += matrix[i][j];
        }
        if (sumRow != checksum)
            return false;
    }

    return true;
}

bool isSumOfColsSame(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int checksum = 0;
    for (int i = 0; i < rows; i++)
    {
        checksum += matrix[i][0];
    }

    for (int i = 1; i < cols; i++)
    {
        int sumCol = 0;
        for (int j = 0; j < rows; j++)
        {
            sumCol += matrix[j][i]; 
        }
        if (checksum != sumCol)
            return false;
    }

    return true;
}

bool isMagicMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    if (isSumOfRowsSame(matrix, rows, cols) && isSumOfColsSame(matrix, rows, cols))
    {
        
    }
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS] {};

    inputMatrix(matrix, 3, 3);

    std::cout << std::boolalpha << isSumOfRowsSame(matrix, 3, 3);
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


bool isMatrixMagic(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    const int magicSum = sumRow(matrix, cols, 0);

    for (int i = 1; i < rows; i++)
    {
        if (magicSum != sumRow(matrix, cols, i))
            return false;
    }

    for (int i = 0; i < cols; i++)
    {
        if (magicSum != sumCol(matrix, rows, i))
            return false;
    }

    return true;
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS] {};
    int n, m;

    std::cout << "Enter N: ";
    std::cin >> n;
    std::cout << "Enter M: ";
    std::cin >> m;

    inputMatrix(matrix, n, m);

    std::cout << std::boolalpha << isMatrixMagic(matrix, n, m);


}