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

void PrintReversedNumber(int number)
{
    cout << "\nReversed Number: " << ReverseNumber(number) << endl;
}

int main()
{
    PrintReversedNumber(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
