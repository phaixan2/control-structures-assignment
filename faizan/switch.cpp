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

    // Q5
    // Check if username is correct and password is correct.

    string username = "admin";
    string password = "1234";

    if (username == "admin")
    {
        if (password == "1234")
            cout << "Login Successful";
        else
            cout << "Wrong Password";
    }
    else
        cout << "Wrong Username";

    // Q6
    // Check if a year is a leap year.
    // (Simplified: divisible by 4, then by 100, then by 400)

    int year = 2000;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Leap Year";
            else
                cout << "Not Leap Year";
        }
        else
            cout << "Leap Year";
    }
    else
        cout << "Not Leap Year";

    // Q7
    // Check if a person is an adult and has a driving license.

    int age = 20;
    bool hasLicense = true;

    if (age >= 18)
    {
        if (hasLicense)
            cout << "Can Drive";
        else
            cout << "Need License";
    }
    else
        cout << "Too Young";

    // Q8
    // Check if a number is positive and divisible by 5.

    int n = 25;

    if (n > 0)
    {
        if (n % 5 == 0)
            cout << "Positive and Divisible by 5";
        else
            cout << "Positive but Not Divisible by 5";
    }
    else
        cout << "Negative Number";

    // Q9
    // Check if marks are passing and attendance is at least 75%.

    int marks = 65;
    int attendance = 80;

    if (marks >= 50)
    {
        if (attendance >= 75)
            cout << "Exam Passed";
        else
            cout << "Attendance Short";
    }
    else
        cout << "Exam Failed";

    // Q10
    // Check if a customer spent at least 5000 and is a premium member.

    int amount = 7000;
    bool premium = true;

    if (amount >= 5000)
    {
        if (premium)
            cout << "Discount Applied";
        else
            cout << "Become Premium";
    }
    else
        cout << "No Discount";

    return 0;
}