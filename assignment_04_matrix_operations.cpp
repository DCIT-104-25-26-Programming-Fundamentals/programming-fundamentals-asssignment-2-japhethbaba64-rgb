#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX = 10;

// Function to input a matrix
void inputMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

// Part A: Transpose a matrix
void transposeMatrix(int matrix[10][10], int rows, int cols)
{
    int transpose[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:" << endl;
    displayMatrix(transpose, cols, rows);
}

// Part B: Add two matrices
void addMatrices(int matrixA[10][10], int matrixB[10][10], int rows, int cols)
{
    int sum[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    cout << "\nMatrix Addition Result:" << endl;
    displayMatrix(sum, rows, cols);
}

// Part C: Multiply two matrices
void multiplyMatrices(int matrixA[10][10], int matrixB[10][10], int rowsA, int colsA, int colsB)
{
    int product[10][10] = {0};

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
            {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "\nMatrix Multiplication Result:" << endl;
    displayMatrix(product, rowsA, colsB);
}

int main()
{
    int matrixA[10][10];
    int matrixB[10][10];

    int rows, cols;

    // Part A: Transpose
    cout << "PART A: Matrix Transpose" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter Matrix:" << endl;
    inputMatrix(matrixA, rows, cols);

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrixA, rows, cols);

    transposeMatrix(matrixA, rows, cols);


    // Part B: Addition
    cout << "\n\nPART B: Matrix Addition" << endl;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter Matrix A:" << endl;
    inputMatrix(matrixA, rows, cols);

    cout << "\nEnter Matrix B:" << endl;
    inputMatrix(matrixB, rows, cols);

    addMatrices(matrixA, matrixB, rows, cols);


    // Part C: Multiplication
    int rowsA, colsA, rowsB, colsB;

    cout << "\n\nPART C: Matrix Multiplication" << endl;

    cout << "Enter rows of Matrix A: ";
    cin >> rowsA;

    cout << "Enter columns of Matrix A: ";
    cin >> colsA;

    cout << "Enter rows of Matrix B: ";
    cin >> rowsB;

    cout << "Enter columns of Matrix B: ";
    cin >> colsB;

    if (colsA != rowsB)
    {
        cout << "Error: Columns of Matrix A must equal rows of Matrix B." << endl;
    }
    else
    {
        cout << "\nEnter Matrix A:" << endl;
        inputMatrix(matrixA, rowsA, colsA);

        cout << "\nEnter Matrix B:" << endl;
        inputMatrix(matrixB, rowsB, colsB);

        multiplyMatrices(matrixA, matrixB, rowsA, colsA, colsB);
    }

    return 0;
}
