#include <iostream>
#include <ctime>
#include "arrays.h"

using namespace std;

int main()
{
	srand(time(NULL));

	cout << "Array sorting!" << endl;

	int arrayLength;
	cout << "Enter array length: ";
	cin >> arrayLength;

	double* array = new double[arrayLength];

	for (int i = 0; i < arrayLength; i++)
	{
		array[i] = (rand() % arrayLength);
	}
	cout << "You array: ";
	for (int i = 0; i < arrayLength; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
	Sort(array, arrayLength);
	cout << "New array: ";
	for (int i = 0; i < arrayLength; i++)
	{
		cout << array[i] << " ";
	}

	system("pause");

	cout << endl;
	cout << "Matrix multiplication!" << endl;
	Matrices();
}