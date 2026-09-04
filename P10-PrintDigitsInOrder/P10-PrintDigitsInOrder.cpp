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

void PrintDigits(int number)
{
    int remainder = 0;

    do
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder << endl;
    } while (number > 0);
}

int main()
{
    PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a positive number: ")));

    return 0;
}