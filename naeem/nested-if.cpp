#include <iostream>

using namespace std;

int main()
{

    // Q1
    // Check if a student passed and earned a scholarship.

    int marks = 85;

    if (marks >= 50)
    {
        if (marks >= 80)
            cout << "Scholarship\n";
    }

    // Q2
    // Check if a person can vote and drive.

    int age = 20;

    if (age >= 18)
    {
        if (age >= 18)
            cout << "Can Vote and Drive\n";
    }

    // Q3
    // Check if a number is positive and even.

    int n = 12;

    if (n > 0)
    {
        if (n % 2 == 0)
            cout << "Positive Even\n";
    }

    // Q4
    // Check if salary is above 50000 and experience is at least 2 years.

    int salary = 60000;
    int experience = 3;

    if (salary > 50000)
    {
        if (experience >= 2)
            cout << "Eligible\n";
    }

    // Q5
    // Check if username and password are correct.

    string username = "admin";
    string password = "1234";

    if (username == "admin")
    {
        if (password == "1234")
            cout << "Login Successful\n";
    }

    // Q6
    // Check if a year is a leap year (simplified).

    int year = 2024;

    if (year % 4 == 0)
    {
        if (year % 100 != 0)
            cout << "Leap Year\n";
    }

    // Q7
    // Check if a customer can get a discount.

    int purchase = 7000;
    bool member = true;

    if (purchase >= 5000)
    {
        if (member)
            cout << "Discount Applied\n";
    }

    return 0;
}