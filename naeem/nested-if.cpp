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

   

    return 0;
}