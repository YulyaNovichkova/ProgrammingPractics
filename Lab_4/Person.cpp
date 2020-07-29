#include <iostream>
#include "Person.h"

using namespace std;

void Person::Read()
{
	cout << "Name: ";
	cin >> Name;

	cout << "Surame: ";
	cin >> Surname;

	cout << "Age: ";
	cin >> Age;

	int numberSex;
	cout << "Sex: Enter '0' for female, '1' for male: ";
	cin >> numberSex;
	switch (numberSex)
	{
	case 0:
	{
		Sex = Female;
		break;
	}
	case 1:
	{
		Sex = Male;
		break;
	}
	}
}

void Person::Show()
{
	cout << endl << Name << " " << Surname << "   Age: " << Age
		<< "   Sex: " << Sex << endl;
}


//void PrintPerson(Person& person)
//{
//
//	cout << person.Name << " " << person.Surname 
//		<< "    Age: " << person.Age << "    Sex: " << person.Sex;
//}

//void ReadPerson(Person* person)
//{
//	char name;
//	char surname;
//	int age;
//	enum Sex sex;
//	int numberSex;
//
//	cout << "Enter name: " << endl;
//	cin >> name;
//	cout << "Enter surname: " << endl;
//	cin >> surname;
//	cout << "Enter age: " << endl;
//	cin >> age;
//	cout << "Sex: Enter '0' for female, '1' for male: ";
//	cin >> numberSex;
//	switch (numberSex)
//	{
//		case 0:
//		{
//			sex = Female;
//			break;
//		}
//		case 1:
//		{
//			sex = Male;
//			break;
//		}
//	}
//
//	Person* person = new Person(name, surname, sex, age);
//}