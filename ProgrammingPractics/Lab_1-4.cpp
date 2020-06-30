#include <iostream>

using namespace std;

int main()
{
    cout << "Student: Novichkova Yulya Aleksandrovna - Group:  586-2.\n";

    //Типы данных и переменные
    {
        int a;  // Объявление целочисленной переменной     
        a = 5;  // Инициализация переменной значением     
        int b = 3;   // Допустимо одновременное объявление и инициализация 

        // Вывод значения переменной на экран    
        cout << "\n Variable a equals " << a;  

        // Значение переменной после запятой подставится вместо %d
        cout << "\n Variable b equals " << b;

        // Можно выводить сразу результат сложения    
        cout << "\n Summ of a and b equals " << a + b;
    }

    //Ввод/вывод данных
    {
        cout << "\n Hello, " << "World!" << endl;
        int a; 
        cout << "Enter a: " << endl;
        cin >> a; 
        float b; 
        cout << "Enter b: " << endl;
        cin >> b;
        cout << "a = " << a << ", b = " << b;
    }

    //Ветвление и операторы выбора
    {
        bool condition = true; 
        if (condition) //используйте логическую переменную как условие 
        {   
            cout << "\n The condition is true\n"; 
        } 
        condition = 10 < 7; 
        if (condition) 
        {
            cout << "\n This statement will not work, since 10 is greater than 7";
        }

        int value; 
        cout << "\n Enter value: ";
        cin >> value; 
        if (value > 10) //используйте логические выражения как условия 
        {
            cout << "\n This statement will work if the user enters a number greater than 10";
        }
        else  //обратите внимание на использование слова else 
        {   
            cout <<"\n This statement will work if the user enters a number less than or equal to 10"; 
        }

        int c;
        cout << "\n Enter c: ";
        cin >> c;
        switch (c) 
        { 
        case 'A':     
            cout << "\n The variable c is ‘A’";     
        break; 

        case 'B':     
        cout << "\n The variable c is ‘B’";    
        break;  

        default:   
            cout << "\n The variable c is equal to any other value.";   
        break; 
        }
    }

    //Операторы цикла
    {
        int a = 0;  
        while (a < 5) // условный цикл с предусловием  
        {    
            cout << "\n Value is " << a << " now" << endl;    
            a++;  
        }

        int d = 0;
        do // условный цикл с постусловием  
        {    
            cout << "\n Value is " << d << " now" << endl;    
            d++;  
        }  
        while (d < 5);

        for (int i = 0; i < 10; i++) //цикл с параметром
        { 
            cout << "\n Value is " << i << " now" << endl; 
        }
    }

    //Операторы передачи управления
    {
        for (int i = 0; i < 10; i++) 
        {
            cout << "\n The text displayed in each iteration";   
            if (i % 2 == 0) // Условие, при котором будет переход на следующую итерацию   
            {      
                continue; // Досрочный переход на следующую итерацию   
            }   
            cout << "\n Text output only in odd iterations"; 
        }

        int a = 10;  
        for (int i = 0; i < 10; i++) 
        {
            a--;    
            if (i >= a) 
            {
                cout << "\n I is more or equal A! Break of cycle";      
                break; // этот оператор досрочно завершает цикл    
            }  
        }  
        cout << "\n A is " << a;
    }

    //Явное и неявное преобразование типов 
    {
        double value = 7.16f + 15 + 'a' + true;
        cout << endl << value;

        double a = 7.16; 
        int b; 
        b = (int)a;   // Явное преобразование типа данных
        cout << endl << b;
    }

    //Задание на проверку простого числа
    {
        int value;
        bool isValuePrime = true;

        cout << "Checking a prime number.Enter the number : " << endl;
        cin >> value;

        if (value <= 0)
        {
            cout << "Incorrect number entered(number must be greater than 0)" << endl;
            cin >> value;
        }
        
        for (int i = 2; i < value - 1; i++)
        {
            if ((value % i) == 0)
            {
                isValuePrime = false;
                break;
            }
        }

        if (isValuePrime)
        {
            cout << "This is a prime number" << endl;
        }
        else
        {
            cout << "This is not a prime number" << endl;
        }
    }
}

