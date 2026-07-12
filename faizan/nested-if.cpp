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

    return 0;
}