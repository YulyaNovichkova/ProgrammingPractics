#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(string name, string surname, int age, enum Sex sex)
{
	Name = name;
	Surname = surname;
	Age = age;
	Sex = sex;
};

void PrintPerson(Person& person)
{
	cout << person.Name << " " << person.Surname
		<< "    Age: " << person.Age;
	switch (person.Sex)
	{
	case 0:
		cout << "    Sex: female" << endl;
		break;
	case 1:
		cout << "    Sex: male" << endl;
		break;
	default:
		break;
	}
}

void ReadPerson(Person* person)
{
	int numberSex;

	cout << "Enter name: " << endl;
	cin >> person->Name;
	cout << "Enter surname: " << endl;
	cin >> person->Surname;
	cout << "Enter age: " << endl;
	cin >> person->Age;
	cout << "Sex: Enter '0' for female, '1' for male: ";
	cin >> numberSex;
	switch (numberSex)
	{
		case 0:
		{
			person->Sex = Female;
			break;
		}
		case 1:
		{
			person->Sex = Male;
			break;
		}
	}
}