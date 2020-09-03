#include <iostream>
#include <iomanip>
#include "arrays.h"

using namespace std;

//Sortirovka vyborom
void Sort(double* array, int arrayLength)
{
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < arrayLength; i++)
	{
		j = i;
		for (int k = i; k < arrayLength; k++)
		{
			if (array[j] > array[k])
			{
				j = k;
			}
		}
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

//Zadat' matricy
void Matrices()
{
	int aRows, aCols, bRows, bCols;

	cout << endl;
	cout << "Attention! The number of columns of the matrix A" << endl
		<< "must coincide with the number of rows of the matrix B!" << endl;
	cout << endl;
	cout << "Enter the number of rows of matrix A: ";
	cin >> aRows;
	cout << "Enter the number of columns of the matrix A: ";
	cin >> aCols;
	cout << "Enter the number of rows of matrix B: ";
	cin >> bRows;
	cout << "Enter the number of columns of the matrix B: ";
	cin >> bCols;
	cout << endl;

	// Zadanie dinamicheskix matriw
	int** matrixA = new int* [aRows];
	for (int i = 0; i < aRows; i++)
	{
		matrixA[i] = new int[aCols];
	}

	int** matrixB = new int* [bRows];
	for (int i = 0; i < bRows; i++)
	{
		matrixB[i] = new int[bCols];
	}

	int** resultMatrix = new int* [aRows];
	for (int i = 0; i < aRows; i++)
	{
		resultMatrix[i] = new int[bCols];
	}

	cout << "The matrix A is: " << endl;
	for (int i = 0; i < aRows; i++)
	{
		for (int j = 0; j < aCols; j++)
		{
			cout << setw(3) << (matrixA[i][j] = rand() % 10);
		}
		cout << endl;
	}
	cout << endl;
	cout << "The matrix B is: " << endl;
	for (int i = 0; i < bRows; i++)
	{
		for (int j = 0; j < bCols; j++)
		{
			cout << setw(3) << (matrixB[i][j] = rand() % 10);
		}
		cout << endl;
	}
	cout << endl;

	MultiplyMatrices(matrixA, aRows, aCols, matrixB, bRows, bCols, resultMatrix);

	delete[]matrixA;
	delete[]matrixB;
	delete[]resultMatrix;
}

//Peremnojenie matric
bool MultiplyMatrices(int** matrixA, int aRows, int aCols,
	int** matrixB, int bRows, int bCols, int** resultMatrix)
{
	if (aCols != bRows)
	{
		cout << "Error!" << endl;
		return false;
	}
	else
	{
		cout << "The new matrix is: " << endl;
		for (int i = 0; i < aRows; i++)
		{
			for (int j = 0; j < bCols; j++)
			{
				resultMatrix[i][j] = 0;
				for (int k = 0; k < aCols; k++)
				{
					resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];

				}
				cout << setw(4) << resultMatrix[i][j] << setw(8);
			}
			cout << endl;
		}
		return true;
	}
}
