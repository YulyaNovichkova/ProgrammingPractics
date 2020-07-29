#include <iostream>
#include <ctime>
#include "arrays.h"
#include "strings.h"
#include "functions.h"

using namespace std;

static int value = 4; // global'naya peremennaya

int main()
{
	srand(time(NULL));

	Pointer();
	system("pause");

	Link();
	system("pause");

	Power();
	system("pause");

	cout << "An example of how local and global variables work: " << endl;

	int value = 8; // lokal'naya peremennaya

	value++; // uvilichenie lokal'noj peremennoj
	::value--; // umen'shenie global'naoj peremennoj

	cout << "Local value: " << value << endl;
	cout << "Global value: " << ::value << endl;
	system("pause");

	GuessNumber();
	system("pause");

	cout << endl;
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
	system("pause");

	cout << endl;
	char line1[50];
	cout << "Enter string:" << endl;
	cin >> line1;

	char* array1 = line1;
	cout << "String length is: " << GetLength(array1) << endl;
	system("pause");

	cout << endl;
	char line2[50];
	char symbol;
	cout << "Enter string:" << endl;
	cin >> line2;
	cout << "Enter symbol:" << endl;
	cin >> symbol;

	char* array2 = line2;

	IndexOf(array2, symbol);
	LastIndexOf(array2, symbol);
	system("pause");

	return 0;
}