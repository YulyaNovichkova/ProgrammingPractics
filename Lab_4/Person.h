#pragma once
#include "Sex.h"

struct Person 
{ 
	string Name;
	string Surname;
	int Age;    
	Sex Sex; 

	Person() {};
	Person(string Name, string Surname, int Age, enum Sex Sex)
	{

	}
};

void PrintPerson(Person&);
void ReadPerson(Person*);