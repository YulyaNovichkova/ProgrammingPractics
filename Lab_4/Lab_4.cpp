#include <iostream>
#include <windows.h>
#include "Weekday.h"
#include "Month.h"
#include "Color.h"

using namespace std;

int main()
{
	int day;
    int month;
    char color; 
    
	cout << "Enter day of the year (from 1 to 365): ";
	cin >> day;

	while (day > 7)
	{
		day -= 7;
	}

    switch (day)
    {
        case 1: 
        {
            cout << "Day of week - Monday" << endl;
            break;
        }
        case 2: 
        {
            cout << "Day of week - Tuesday" << endl;
            break;
        }
        case 3: 
        {
            cout << "Day of week - Wednesday" << endl;
            break;
        }
        case 4: 
        {
            cout << "Day of week - Thursday" << endl;
            break;
        }
        case 5: 
        {
            cout << "Day of week - Friday" << endl;
            break;
        }
        case 6: 
        {
            cout << "Day of week - Saturday" << endl;
            break;
        }
        case 7: 
        {
            cout << "Day of week - Sunday" << endl;
            break;
        }
    }
    system("pause");

    cout << endl;
    cout << "Enter month of the year (from 1 to 12): ";
    cin >> month;

    switch (month)
    {
        case 1:
        {
            cout << "Month of year - January" << endl;
            break;
        }
        case 2:
        {
            cout << "Month of year - February" << endl;
            break;
        }
        case 3:
        {
            cout << "Month of year - March" << endl;
            break;
        }
        case 4:
        {
            cout << "Month of year - April" << endl;
            break;
        }
        case 5:
        {
            cout << "Month of year - May" << endl;
            break;
        }
        case 6:
        {
            cout << "Month of year - June" << endl;
            break;
        }
        case 7:
        {
            cout << "Month of year - July" << endl;
            break;
        }
        case 8:
        {
            cout << "Month of year - August" << endl;
            break;
        }
        case 9:
        {
            cout << "Month of year - September" << endl;
            break;
        }
        case 10:
        {
            cout << "Month of year - October" << endl;
            break;
        }
        case 11:
        {
            cout << "Month of year - November" << endl;
            break;
        }
        case 12:
        {
            cout << "Month of year - Decembe" << endl;
            break;
        }
    }
    system("pause");

    cout << endl;

    do
    {
        cout << "Gray is 1" << endl
            << "Red is 2" << endl
            << "Blue is 3" << endl
            << "Green is 4" << endl << endl;

        cout << "Enter color (from 1 to 4): ";
        cin >> color;
        system("cls");

        cin.ignore(1);
        system("cls");

        switch (color)
        {
        case '1':
        {
            system("cls");
            system("color 08");
            break;
        }
        case '2':
        {
            system("cls");
            system("color 04");
            break;
        }
        case '3':
        {
            system("cls");
            system("color 03");
            break;
        }
        case '4':
        {
            system("cls");
            system("color 02");
            break;
        }
        }
    } while (color != '0');
    int k = atoi(&color);
    return(k);

}

