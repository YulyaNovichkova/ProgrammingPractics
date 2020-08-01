#include <iostream>
#include "Person.h"

using namespace std;

void PrintPerson(Person& person)
{

	cout << endl << person.Name << " " << person.Surname
		<< "    Age: " << person.Age << "    Sex: " << person.Sex << endl;
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

	Person* person = new Person(person->Name, person->Surname, person->Age, person->Sex);
}