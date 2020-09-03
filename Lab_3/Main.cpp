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

	cout << "Index is: "  << IndexOf(array2, symbol) << endl;;
	cout << "Index is (last): " << LastIndexOf(array2, symbol) << endl;
	system("pause");

	cout << endl;
	char line3[255];
	char substring[255];
	int startIndex;
	int substringLength;

	cout << "Enter string:" << endl;
	cin >> line3;

	cout << "Enter start index:" << endl;
	cin >> startIndex;

	cout << "Enter substring length:" << endl;
	cin >> substringLength;

	GetSubstring(line3, substring, startIndex, substringLength);
	system("pause");

	cout << endl;
	char fullFilename[255];
	char filename[255];
	char fileExtension[255];
	char filepath[255];

	cout << "Enter full filename:" << endl;
	cin >> fullFilename;

	GetFilename(fullFilename, filename);
	GetFileExtension(fullFilename, fileExtension);
	GetFilepath(fullFilename, filepath);

	system("pause");
	return 0;
}