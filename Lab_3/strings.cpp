#include <iostream>
#include "strings.h"

using namespace std;

// Opredelit' dlinu stroki
int GetLength(char* string)
{
	int length = 0;
	if (string == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = 0; string[i]; ++i)
		{
			++length;
		}
	}
	return length;
}

// Index simvola
int IndexOf(char* string, char c)
{
	int index = 0;
	if (string == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = 0; string[i]; ++i)
		{
			if (string[i] == c)
			{
				return index;
				break;
			}
			else ++index;
		}
	}
}

// Index poslednego vhojdeniya
int LastIndexOf(char* string, char c)
{
	int index = GetLength(string);
	if (string == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = index; string[i] >= 0; --i)
		{
			if (string[i] == c)
			{
				return index;
				break;
			}
			else --index;
			if(index < 0)
			{
				index == NULL;
				cout << "Symbol not found!" << endl;
				return false;
			}
		}
	}
}

// Vozvrat podstroki
bool GetSubstring(char* string, char* substring, int startIndex, int substringLength)
{
	int stringLength = GetLength(string);

	if (string == NULL)
	{
		return false;
	}
	if (stringLength < startIndex + substringLength)
	{
		return false;
	}
	else
	{
		int j = 0;
		for (int i = startIndex; i < startIndex + substringLength; i++)
		{
			substring[j] = string[i];
			j++;
		}
		substring[j] = '\0';
		cout << "New substring: " << substring << endl;
		return substring;
	}
}

bool GetFilename(char* fullFilename, char* filename)
{
	int lengthName = (GetLength(fullFilename) - LastIndexOf(fullFilename, '\\')) - (GetLength(fullFilename) - LastIndexOf(fullFilename, '.') + 1);
	cout << "File name:" << endl;
	if ((LastIndexOf(fullFilename, '.') != false) && (LastIndexOf(fullFilename, '\\') != false))
	{
		return GetSubstring(fullFilename, filename, LastIndexOf(fullFilename, '\\') + 1, lengthName);
	}
}

bool GetFileExtension(char* fullFilename, char* fileExtension)
{
	int lengthExtension = GetLength(fullFilename) - LastIndexOf(fullFilename, '.');
	if (LastIndexOf(fullFilename, '.') != false)
	{
		cout << "File extension:" << endl;
		return GetSubstring(fullFilename, fileExtension, LastIndexOf(fullFilename, '.'), lengthExtension);
	}
}

bool GetFilepath(char* fullFilename, char* filepath)
{
	if (LastIndexOf(fullFilename, '\\') != false)
	{
		cout << "File path:" << endl;
		return GetSubstring(fullFilename, filepath, 0, LastIndexOf(fullFilename, '\\') + 1);
	}
}