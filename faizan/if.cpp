#include <iostream>

using namespace std;

int main()
{

    int num = 5;

    if (num > 0)
        cout << "Positive";

    // Print "Even" if a number is even.

    int num = 8;

    if (num % 2 == 0)
        cout << "Even";

    // Print "Pass" if marks are at least 50.

    int marks = 72;

    if (marks >= 50)
        cout << "Pass";

    // Print "Adult" if age is 18 or above.

    int age = 20;

    if (age >= 18)
        cout << "Adult";

    // Print "Multiple of 5" if the number is divisible by 5.

    int n = 25;

    if (n % 5 == 0)
        cout << "Multiple of 5";

    // Print "Character is A" if ch is 'A'.

    char ch = 'A';

    if (ch == 'A')
        cout << "Character is A";

    // Print "Negative" if number is less than 0.

    int n = -3;

    if (n < 0)
        cout << "Negative";

    // Print "Eligible" if height is at least 170 cm.

    int height = 175;

    if (height >= 170)
        cout << "Eligible";

    // Print "Square" if length equals width.

    int length = 8,
        width = 8;

    if (length == width)
        cout << "Square";

    // Print "Vowel" if character is 'a'.

    char ch = 'a';

    if (ch == 'a')
        cout << "Vowel";
    return 0;
}