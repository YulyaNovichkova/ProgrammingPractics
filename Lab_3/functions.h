#pragma once
#include <iostream>
#include <ctime>

using namespace std;

// Prototipy funkcij
int Pointer();
int Link();

void GetRootsByPointer(int, int, int, double*, double*);
void GetRootsByLink(int, int, int, double&, double&);

bool CheckingValues(int, int, int);

void Power();
int GetPower(int, int);

void GuessNumber();

static int value = 4; // global'naya peremennaya

// Korni kvadratnogo uravneniya
int Pointer()
{
	cout << "Pointer!" << endl;

	int a, b, c;
	double root1 = NULL;
	double root2 = NULL;

	double* x1;
	x1 = &root1;
	double* x2;
	x2 = &root2;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	if (CheckingValues(a, b, c) == false)
	{
		return 0;
	}
	else
	{
		GetRootsByPointer(a, b, c, x1, x2);
	}

	if (*x1 == NULL && *x2 == NULL)
	{
		cout << "Not roots!" << endl;
	}
	else if (*x2 == NULL)
	{
		cout << "Roots x1 = " << *x1 << endl;
	}
	else
	{
		cout << "Roots x1 = " << *x1 << endl << "Roots x2 = " << *x2 << endl;
	}

	return 0;
}

// Korni kvadratnogo uravneniya
int Link()
{
	cout << endl << "Link!" << endl;

	int a, b, c;
	double root1 = NULL;
	double root2 = NULL;

	double& x1 = root1;
	double& x2 = root2;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	if (CheckingValues(a, b, c) == false)
	{
		return 0;
	}
	else
	{
		GetRootsByLink(a, b, c, x1, x2);
	}

	if (x1 == NULL && x2 == NULL)
	{
		cout << "Not roots!" << endl;
	}
	else if (x2 == NULL)
	{
		cout << "Roots x1 = " << x1 << endl;
	}
	else
	{
		cout << "Roots x1 = " << x1 << endl << "Roots x2 = " << x2 << endl;
	}

	return 0;
}


// Po ukazately
void GetRootsByPointer(int a, int b, int c, double* x1, double* x2)
{
	double discriminant = (double)b * b - 4.0 * a * c;

	if (discriminant < 0)
	{
		*x1 = *x2 = NULL;
	}
	else if (discriminant == 0)
	{
		*x1 = -b / (2 * a);
		*x2 = NULL;
	}
	else
	{
		*x1 = (-b - sqrt(discriminant)) / (2.0 * a);
		*x2 = (-b + sqrt(discriminant)) / (2.0 * a);
	}
}

// Po ssylke
void GetRootsByLink(int a, int b, int c, double& x1, double& x2)
{
	double discriminant = (double)b * b - 4.0 * a * c;

	if (discriminant < 0)
	{
		x1 = x2 = NULL;
	}
	else if (discriminant == 0)
	{
		x1 = -b / (2 * a);
		x2 = NULL;
	}
	else
	{
		x1 = (-b - sqrt(discriminant)) / (2.0 * a);
		x2 = (-b + sqrt(discriminant)) / (2.0 * a);
	}
}

// Proverka koficientov uravneniya
bool CheckingValues(int a, int b, int c)
{
	if ((a == 0) && (b == 0))
	{
		cout << "Not roots!" << endl;
		return false;
	}
	if (a == 0)
	{
		cout << "Roots x1 = " << (-c / b) << endl;
		return false;
	}
	if (c == 0)
	{
		cout << "Roots x1 = " << (-b / a) << endl << "Roots x2 = " << c << endl;
		return false;
	}
}

//Zadanie chisla, shtoby vozvesti ego v stepen'
void Power()
{
	int base;
	int power;

	cout << "Enter base:" << endl;
	cin >> base;

	cout << "Enter power:" << endl;
	cin >> power;

	cout << endl << "Received value: " << GetPower(base, power) << endl;
}

//Vozvedenie chisla v stepen'
int GetPower(int base, int power)
{
	if (power > 0)
	{
		return base * GetPower(base, power - 1);
	}
	else
	{
		return 1;
	}
}

//Ugaday chislo
void GuessNumber()
{
	cout << "Guess a number from 0 to 9 in 10 attempts!" << endl;

	srand(time(NULL));

	int value;
	int random = 1 + rand() % 10;
	int temp = 1;

	while (temp <= 10)
	{
		cout << temp << " attempt: ";
		cin >> value;

		if (value > random)
		{
			cout << "Many" << endl;
		}
		if (value < random)
		{
			cout << "Few" << endl;
		}
		else if (value == random)
		{
			cout << "You win!" << endl;
			break;
		}

		temp++;
	}

	if (temp == 11)
	{
		cout << "You are lose!" << endl;
	}
}
