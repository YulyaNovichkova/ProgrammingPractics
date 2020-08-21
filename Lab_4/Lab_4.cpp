#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include "Weekday.h"
#include "Month.h"
#include "Color.h"
#include "Person.h"
#include <vector>

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
    petr.Name = "Petr";
    petr.Surname = "Petrov";
    petr.Age = 5;
    petr.Sex = Male;

    Person yulya;
    yulya.Name = "Yulya";
    yulya.Surname = "Novichkova";
    yulya.Age = 22;
    yulya.Sex = Female;

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

       system("pause");
       system("cls");

    Person *newPerson = new Person();
    ReadPerson(newPerson);
    PrintPerson(*newPerson);
    delete newPerson;

    system("pause");
    system("cls");

    // Massiv ukazatelei
    const int n = 5;

    Person* arrayPerson;
    Person arrayNewPerson[5];
    arrayPerson = arrayNewPerson;

    for (int i = 0; i < 5; i++)
    {
        ReadPerson(&arrayPerson[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << i << ". ";
        PrintPerson(arrayPerson[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        // !!!!!!!!!!!!! ne rabotaet !!!!!!!!!!!!!!!!
        delete [] &arrayPerson[i];
    }

    system("pause");
    system("cls");

    // Vector
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    for (int n : v1)
    {
        cout << n << "\t";
    }
    cout << endl;

    v1.erase(v1.begin() + 2);

    for (int n : v1)
    {
        cout << n << "\t";
    }
    cout << endl;

    v1.emplace(v1.begin() + 1, 666);

    for (int n : v1)
    {
        cout << n << "\t";
    }
    cout << endl;

    system("pause");
    system("cls");

    // Vector iz lydei
    vector<string> friends;

    string buffer = "";

    cout << "Vvedite imena druzei. " << endl
        << "Po okonchanie vvoda vvedite pystyu stroky." << endl;

    do 
    {
        getline(cin, buffer);
        if (buffer.size() > 0) 
        {
            friends.push_back(buffer);
        }
    } 
    while (buffer != "");

    unsigned int vector_size = friends.size();
    
    cout << "Vyvod:" << endl;

    for (int i = 0; i < vector_size; i++) 
    {
        cout << friends[i] << endl;
    }
    cout << endl;

    friends.erase(friends.begin() + 2);

    for (int i = 0; i < vector_size - 1; i++)
    {
        cout << friends[i] << endl;
    }
    cout << endl;

    friends.emplace(friends.begin() + 1, "Ivanov");

    for (int i = 0; i < vector_size; i++)
    {
        cout << friends[i] << endl;
    }
    cout << endl;

    system("pause");
    system("cls");
}

