// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu()
{
    cout << "Please select which operation to perform:" << endl;
    cout << "t\1. Factorial" << endl;
    cout << "t\2. Arithmetic Series" << endl;
    cout << "t\3. Geometric Series" << endl;
    cout << "t\4. Exit" << endl;
    cout << "Your Selection: ";
}

void again()
{
    char input;
    cout << "Go Again? [Y/N] ";
    cin >> input;
    if (input == 'y'|| 'Y')
    {
        main();
    }
}

void factorial()
{
    float X;
    float A;
    float B;
    float C;
    cout << "Factorial:" << endl;
    cout << "Enter a number: ";
    cin >> X;

    if (X < 1)
    {
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> X;
    }

    else if (X == 1)
    {
        cout << "1! = " << X << endl;
        again();
    }

    else if (X > 1 > 4)
    {
        A = X * (X - 1);

        if (--X == 1) 
        {
            cout << X << "! = " << A;
            again();
        }

        else
        {
            B = A * (X - 2);

            if ((X - 2) == 1)
            {
                cout << X << "! = " << B;
                again();
            }
            
            else
            {
                C = B * (X - 3);

                if ((X - 3) == 1)
                {
                    cout << X << "! = " << C;
                }
            }
        }
    }
}

void arithmetic()
{

}

void geometric()
{

}

int main()
{
    int choice;
    char again;

    do
    {
        printMenu();
        cin >> choice;

        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1)
        {
            return 0;
        }

        else if (choice == 1)
        {
            factorial();
        }

        else if (choice == 2)
        {
            arithmetic();
        }

        else if (choice == 3)
        {
            geometric();
        }

        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
