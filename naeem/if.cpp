#include <iostream>

using namespace std;

int main()
{

    // Q1
    // Check if a number is positive.

    int n = 5;

    if (n > 0)
        cout << "Positive\n";

    // Q2
    // Check if a number is even.

    n = 8;

    if (n % 2 == 0)
        cout << "Even\n";

    // Q3
    // Check if age is at least 18.

    int age = 20;

    if (age >= 18)
        cout << "Adult\n";

    // Q4
    // Check if marks are at least 50.

    int marks = 75;

    if (marks >= 50)
        cout << "Pass\n";

    // Q5
    // Check if salary is greater than 50000.

    int salary = 60000;

    if (salary > 50000)
        cout << "High Salary\n";

    // Q6
    // Check if temperature is above 30.

    int temp = 35;

    if (temp > 30)
        cout << "Hot\n";

    // Q7
    // Check if character is uppercase.

    char ch = 'A';

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase\n";

    return 0;
}
