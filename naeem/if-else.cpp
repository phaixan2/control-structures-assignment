#include <iostream>

using namespace std;

int main()
{

    // Q1
    // Check whether a number is even or odd.

    int n = 9;

    if (n % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";

    // Q2
    // Check whether a number is positive or negative.

    n = -5;

    if (n >= 0)
        cout << "Positive\n";
    else
        cout << "Negative\n";

    // Q3
    // Check whether a student passed.

    int marks = 48;

    if (marks >= 50)
        cout << "Pass\n";
    else
        cout << "Fail\n";

    // Q4
    // Check whether a person can vote.

    int age = 17;

    if (age >= 18)
        cout << "Eligible\n";
    else
        cout << "Not Eligible\n";

    // Q4
    // Check whether a person can vote.

    int age = 17;

    if (age >= 18)
        cout << "Eligible\n";
    else
        cout << "Not Eligible\n";

    // Q5
    // Check whether temperature is hot.

    int temp = 29;

    if (temp > 30)
        cout << "Hot\n";
    else
        cout << "Cold\n";

    // Q6
    // Find the larger number.

    int a = 15, b = 20;

    if (a > b)
        cout << a << endl;
    else
        cout << b << endl;

    // Q7
    // Check whether a number is divisible by 3.

    n = 14;

    if (n % 3 == 0)
        cout << "Divisible\n";
    else
        cout << "Not Divisible\n";

    return 0;
}