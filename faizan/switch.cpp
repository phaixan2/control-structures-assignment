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

    // Q6
    // Nested Switch
    // Country:
    // 1 = Pakistan
    // 2 = USA
    // City:
    // Pakistan -> 1 = Lahore, 2 = Karachi
    // USA -> 1 = New York, 2 = Chicago

    int country = 1, city = 2;

    switch (country)
    {
    case 1:
        switch (city)
        {
        case 1:
            cout << "Lahore";
            break;
        case 2:
            cout << "Karachi";
            break;
        default:
            cout << "Invalid City";
        }
        break;

    case 2:
        switch (city)
        {
        case 1:
            cout << "New York";
            break;
        case 2:
            cout << "Chicago";
            break;
        default:
            cout << "Invalid City";
        }
        break;

    default:
        cout << "Invalid Country";
    }

    // Q7
    // Nested Switch
    // Department:
    // 1 = IT
    // 2 = CS
    // Semester:
    // 1 or 2

    int dept = 2, sem = 1;

    switch (dept)
    {
    case 1:
        switch (sem)
        {
        case 1:
            cout << "IT First Semester";
            break;
        case 2:
            cout << "IT Second Semester";
            break;
        }
        break;

    case 2:
        switch (sem)
        {
        case 1:
            cout << "CS First Semester";
            break;
        case 2:
            cout << "CS Second Semester";
            break;
        }
        break;
    }

    // Q8
    // Nested Switch
    // Menu:
    // 1 = Drinks
    // 2 = Snacks

    int menu = 1, item = 2;

    switch (menu)
    {
    case 1:
        switch (item)
        {
        case 1:
            cout << "Tea";
            break;
        case 2:
            cout << "Coffee";
            break;
        }
        break;

    case 2:
        switch (item)
        {
        case 1:
            cout << "Burger";
            break;
        case 2:
            cout << "Pizza";
            break;
        }
        break;
    }

    // Q9
    // Nested Switch
    // Vehicle:
    // 1 = Car
    // 2 = Bike

    int vehicle = 2, brand = 1;

    switch (vehicle)
    {
    case 1:
        switch (brand)
        {
        case 1:
            cout << "Toyota";
            break;
        case 2:
            cout << "Honda";
            break;
        }
        break;

    case 2:
        switch (brand)
        {
        case 1:
            cout << "Yamaha";
            break;
        case 2:
            cout << "Suzuki";
            break;
        }
        break;
    }

    // Q10
    // Nested Switch
    // Role:
    // 1 = Student
    // 2 = Teacher

    int role = 1, option = 2;

    switch (role)
    {
    case 1:
        switch (option)
        {
        case 1:
            cout << "View Result";
            break;
        case 2:
            cout << "View Attendance";
            break;
        }
        break;

    case 2:
        switch (option)
        {
        case 1:
            cout << "Enter Marks";
            break;
        case 2:
            cout << "Take Attendance";
            break;
        }
        break;
    }


    return 0;
}