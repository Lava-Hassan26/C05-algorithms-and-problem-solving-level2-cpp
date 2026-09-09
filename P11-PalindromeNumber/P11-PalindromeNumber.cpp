#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

int ReverseNumber(int number)
{
    int remainder = 0;
    int reversedNumber = 0;

    do
    {
        remainder = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + remainder;
    } while (number > 0);

    return reversedNumber;
}

bool IsPalindromeNumber(int number)
{
    return number == ReverseNumber(number);
}

void PrintResult(int number)
{
    cout << endl;
    if (IsPalindromeNumber(number))
        cout << "Yes, it is a Palindrome number.\n";
    else
        cout << "No, it is NOT a Palindrome number.\n";
}

int main()
{
    PrintResult(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}
