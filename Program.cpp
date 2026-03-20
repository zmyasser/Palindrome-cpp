#include <iostream>
using namespace std;

long ReadNumber()
{
    // We prefer long in case the user input is a large number!
    long Number = 0;

    cout << "Please enter a number: ";
    cin >> Number;

    return Number;
}

// Using for loop
bool isPalindrome_01(long Number)
{
    long rem = 0;

    for (short i = Number; i; i /= 10)
    {
        rem = rem * 10 + (i % 10);
    }

    return (rem == Number) ? true : false;
}

// Using While loop
bool isPalindrome_02(long Number)
{
    long rem = 0;
    long tempNum = Number;

    while (tempNum)
    {
        rem = rem * 10 + (tempNum % 10);
        tempNum /= 10;
    }

    return (rem == Number) ? true : false;
}

int main()
{

    long Number = ReadNumber();

    if (isPalindrome_01(Number))
    {
        cout << "Yes, it is palindrome!\n";
    }

    else
    {
        cout << "No, it is not palindrome!\n";
    }

    // We can Use this also but using the if statement is much better and cleaner.
    // printf(isPalindrome_01(ReadNumber()) ? "\nPalindrome\n\n" : "\nNot Palindrome\n\n");

    return 0;
}