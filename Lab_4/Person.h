#pragma once
#include "Sex.h"

using namespace std;

struct Person 
{ 
	string Name;
	string Surname;
	int Age;    
	Sex Sex; 

	Person() {};
	Person(string name, string surname, int age, enum Sex sex);
};

void PrintPerson(Person&);
void ReadPerson(Person*);