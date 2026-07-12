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

    return 0;
}
