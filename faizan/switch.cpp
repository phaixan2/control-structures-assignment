#include <iostream>
using namespace std;
int main()
{
    // Q1
    // Print the day of the week using switch.
    // 1 = Monday, 2 = Tuesday, ..., 7 = Sunday.

    int day = 3;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Day";
    }

    // Q2
    // Print the month name using switch.
    // 1 = January, 2 = February, 3 = March.

    int month = 2;

    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    default:
        cout << "Other Month";
    }

    // Q3
    // Print grade description.
    // A = Excellent, B = Good, C = Average, F = Fail.

    char grade = 'B';

    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Average";
        break;
    case 'F':
        cout << "Fail";
        break;
    default:
        cout << "Invalid Grade";
    }

    // Q4
    // Perform a simple calculator using switch.

    int a = 10, b = 5;
    char op = '*';

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Invalid Operator";
    }


    return 0;
}