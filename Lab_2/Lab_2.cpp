#include <iostream>
#include <ctime>

using namespace std;

// ????????? ???????
int Pointer();
int Link();

void GetRootsByPointer(int, int, int, double*, double*);
void GetRootsByLink(int, int, int, double&, double&);

bool CheckingValues(int, int, int);

void Power();
int GetPower(int, int);

void GuessNumber();

static int value = 4; // ?????????? ??????????

int main()
{
	Pointer();
	system("pause");

	Link();
	system("pause");

	Power();
	system("pause");

	cout << "An example of how local and global variables work: " << endl;

	int value = 8; // ???????? ????????? ??????????

	value++; // ?????????? ????????? ??????????
	::value--; // ?????????? ?????????? ??????????

	cout << "Local value: " << value << endl;
	cout << "Global value: " << ::value << endl;
	system("pause");

	GuessNumber();

	return 0;
}

// ????? ??????????? ?????????
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

// ????? ??????????? ?????????
int Link()
{
	cout << endl << "Link!" << endl;

	int a, b, c;
	double root1 = NULL;
	double root2 = NULL;

	double &x1 = root1;
	double &x2 = root2;

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


// ???????? ???????? ????? ?????????
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

// ???????? ???????? ?? ??????
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

// ???????? ???????? ?????????????
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

//??????? ???????? ??? ?????????? ????? ? ???????
void Power()
{
	int base;
	int power;

	cout << "Enter base:" << endl;
	cin >> base;

	cout << "Enter power:" << endl;
	cin >> power;

	cout << endl << "Received value: "  << GetPower(base, power) << endl;
}

//?????????? ????? ? ???????
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

//?????????? ?????
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