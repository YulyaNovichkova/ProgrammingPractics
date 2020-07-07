#include <iostream>

using namespace std;

void GetRoots(int, int, int, double*, double*);

int main()
{
	int a, b, c;
	double x1 = NULL;
	double x2 = NULL;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	
	if ((a == 0) && (b == 0))
	{
		cout << "Not roots!" << endl;
		return 0;
	}
	if (a == 0)
	{
		cout << "Roots x1 = " << (-c / b) << endl;
		return 0;
	}
	if (c == 0)
	{
		cout << "Roots x1 = " << (-b / a) << endl << "Roots x2 = " << c << endl;
		return 0;
	}
	else
	{
		GetRoots(a, b, c, &x1, &x2);
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

void GetRoots(int a, int b, int c, double* x1, double* x2)
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