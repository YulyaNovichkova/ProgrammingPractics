#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include "Weekday.h"
#include "Month.h"
#include "Color.h"
#include "Person.h"

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
            << "Green is 4" << endl 
            << "0 is exit" << endl << endl;

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
        case '0':
            system("color 07");
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    } while (color != '0');
    int k = atoi(&color);

    system("pause");
    system("cls");

    Person ivan;
    ivan.Name = "Ivan";
    ivan.Surname = "Ivanov";
    ivan.Age = 43;
    ivan.Sex = Male;

    Person petr;
    ivan.Name = "Petr";
    ivan.Surname = "Petrov";
    ivan.Age = 5;
    ivan.Sex = Male;

    Person yulya;
    ivan.Name = "Yulya";
    ivan.Surname = "Novichkova";
    ivan.Age = 22;
    ivan.Sex = Female;

    cout << "Name is " << yulya.Name << endl;
    cout << "Sex is " << yulya.Sex << endl;

    Person* personPointer = &yulya;
    cout << personPointer << endl;
    personPointer->Age = 25;
    cout << "Age is " << personPointer->Age << endl << endl;

    const int N = 3;
    Person person[N];
    for (int i = 0; i < N; i++)
    {
        ReadPerson(&person[i]);
    }
    for (int i = 0; i < N; i++)
    {
        PrintPerson(person[i]);
    }
    
    //Person *person22 = new Person();
}

