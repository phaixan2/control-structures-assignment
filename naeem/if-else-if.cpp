#include <iostream>

using namespace std;

int main()
{

    // Q1
    // Check whether a number is positive, negative, or zero.

    int n = 0;

    if (n > 0)
        cout << "Positive\n";
    else if (n < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";

    // Q2
    // Check grade based on marks.

    int marks = 72;

    if (marks >= 80)
        cout << "A\n";
    else if (marks >= 60)
        cout << "B\n";
    else
        cout << "C\n";

    // Q3
    // Find the largest of two numbers or check if equal.

    int a = 10, b = 10;

    if (a > b)
        cout << "A is Larger\n";
    else if (b > a)
        cout << "B is Larger\n";
    else
        cout << "Equal\n";

    // Q4
    // Check age category.

    int age = 15;

    if (age < 13)
        cout << "Child\n";
    else if (age < 20)
        cout << "Teenager\n";
    else
        cout << "Adult\n";

  
    return 0;
}