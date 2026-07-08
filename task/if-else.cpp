#include <iostream>

using namespace std;

int main()
{

    // Q1
    // Check whether a number is even or odd.

    int n = 7;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    // Q2

    // Check whether a number is positive or negative.

    int n = -4;

    if (n >= 0)
        cout << "Positive";
    else
        cout << "Negative";
    // Q3

    // Check if a student passed (50 marks).

    int marks = 45;

    if (marks >= 50)
        cout << "Pass";
    else
        cout << "Fail";
    // Q4

    // Check if age is eligible to vote.

    int age = 17;

    if (age >= 18)
        cout << "Eligible";
    else
        cout << "Not Eligible";
    // Q5

    // Check if temperature is hot (>30).

    int temp = 28;

    if (temp > 30)
        cout << "Hot";
    else
        cout << "Cold";
    // Q6

    // Find the larger of two numbers.

    int a = 10, b = 20;

    if (a > b)
        cout << a;
    else
        cout << b;
    // Q7

    // Check if number is divisible by 3.

    int n = 14;

    if (n % 3 == 0)
        cout << "Divisible";
    else
        cout << "Not Divisible";
    // Q8

    // Check whether a character is uppercase.

    char ch = 'G';

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase";
    else
        cout << "Not Uppercase";
    // Q9

    // Check whether salary is above 50,000.

    int salary = 40000;

    if (salary > 50000)
        cout << "High Salary";
    else
        cout << "Low Salary";

    int salary = 40000;

    if (salary > 50000)
        cout << "High Salary";
    else
        cout << "Low Salary";
    // Q10

    // Check whether number is zero.

    int n = 0;

    if (n == 0)
        cout << "Zero";
    else
        cout << "Not Zero";
    return 0;
}