#pragma once
#include "Sex.h"

struct Person 
{ 
	char Name[20];
	char Surname[30];
	int Age;    
	Sex Sex; 

	void Read();
	void Show();
};


