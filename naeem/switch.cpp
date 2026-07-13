#include <iostream>

using namespace std;

int main()
{

    // Q1
    // Print the day of the week.
    // 1 = Monday, 2 = Tuesday, ..., 7 = Sunday.

    int day = 4;

    switch (day)
    {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid Day\n";
    }

    // Q2
    // Print the month.
    // 1 = January, 2 = February, 3 = March.

    int month = 2;

    switch (month)
    {
    case 1:
        cout << "January\n";
        break;
    case 2:
        cout << "February\n";
        break;
    case 3:
        cout << "March\n";
        break;
    default:
        cout << "Other Month\n";
    }

    // Q3
    // Print traffic light action.
    // R = Stop, Y = Wait, G = Go.

    char light = 'Y';

    switch (light)
    {
    case 'R':
        cout << "Stop\n";
        break;
    case 'Y':
        cout << "Wait\n";
        break;
    case 'G':
        cout << "Go\n";
        break;
    default:
        cout << "Invalid\n";
    }

    // Q4
    // Print grade description.

    char grade = 'A';

    switch (grade)
    {
    case 'A':
        cout << "Excellent\n";
        break;
    case 'B':
        cout << "Good\n";
        break;
    case 'C':
        cout << "Average\n";
        break;
    case 'F':
        cout << "Fail\n";
        break;
    default:
        cout << "Invalid Grade\n";
    }

    
    return 0;
}