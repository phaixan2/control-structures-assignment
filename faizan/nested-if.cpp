#include <iostream>
using namespace std;

int main()
{
    // Q1
    // Check if a student passed and is eligible for a scholarship.
    // Pass marks = 50, Scholarship = 80+

    int marks = 85;

    if (marks >= 50)
    {
        if (marks >= 80)
            cout << "Scholarship";
        else
            cout << "Passed";
    }
    else
        cout << "Failed";

    // Q2
    // Check if a person can vote and can become a senator.
    // Vote = 18+, Senator = 30+

    int age = 35;

    if (age >= 18)
    {
        if (age >= 30)
            cout << "Can Vote and Become Senator";
        else
            cout << "Can Vote";
    }
    else
        cout << "Cannot Vote";

    // Q3
    // Check if a number is positive and even.

    int n = 12;

    if (n > 0)
    {
        if (n % 2 == 0)
            cout << "Positive Even";
        else
            cout << "Positive Odd";
    }
    else
        cout << "Not Positive";

    // Q4
    // Check if salary is above 30,000 and experience is at least 2 years.

    int salary = 45000;
    int experience = 3;

    if (salary > 30000)
    {
        if (experience >= 2)
            cout << "Eligible";
        else
            cout << "Need More Experience";
    }
    else
        cout << "Salary Too Low";

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

    age = 20;
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

    return 0;
}