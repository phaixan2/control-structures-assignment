
#include <iostream>

using namespace std;

int main()
{
    // Q1

    // Check if number is positive, negative, or zero.

    int n = 0;

    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";
    // Q2

    // Assign grades.

    int marks = 82;

    if (marks >= 90)
        cout << "A";
    else if (marks >= 80)
        cout << "B";
    else if (marks >= 70)
        cout << "C";
    else
        cout << "Fail";
    // Q3

    // Find the largest among two numbers.

    int a = 10, b = 10;

    if (a > b)
        cout << "A is larger";
    else if (b > a)
        cout << "B is larger";
    else
        cout << "Equal";
    // Q4

    // Traffic light.

    char light = 'Y';

    if (light == 'R')
        cout << "Stop";
    else if (light == 'Y')
        cout << "Ready";
    else if (light == 'G')
        cout << "Go";
    // Q5

    // Check age group.

    int age = 15;

    if (age < 13)
        cout << "Child";
    else if (age < 20)
        cout << "Teen";
    else
        cout << "Adult";
    // Q6

    // Check discount.

    int amount = 800;

    if (amount >= 2000)
        cout << "30%";
    else if (amount >= 1000)
        cout << "20%";
    else
        cout << "No Discount";
    // Q7

    // Weather message.

    int temp = 15;

    if (temp > 30)
        cout << "Hot";
    else if (temp >= 20)
        cout << "Warm";
    else
        cout << "Cold";
    // Q8

    // Find the largest among three numbers.

    int a = 4, b = 9, c = 6;

    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;
    // Q9

    // Check character type.

    char ch = '5';

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase";
    else
        cout << "Digit/Special";
    // Q10

    // Check BMI category.

    int bmi = 27;

    if (bmi < 18)
        cout << "Underweight";
    else if (bmi < 25)
        cout << "Normal";
    else
        cout << "Overweight";

    return 0;
}