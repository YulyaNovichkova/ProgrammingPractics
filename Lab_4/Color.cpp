#include <iostream>
#include "Color.h"

using namespace std;

int Menu3()
{
    char color;
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
    return(k);
};

void Color()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    Menu3();
    //cout << key << endl;
    //system("pause");
}