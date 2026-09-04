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

short CountDigitFrequency(short digit, int number)
{
    int remainder = 0;
    short frequency = 0;

    do
    {
        remainder = number % 10;
        number = number / 10;

        if (remainder == digit)
            frequency++;

    } while (number > 0);

    return frequency;
}

int main()
{
    int number = ReadPositiveNumber("Please enter the main number: ");
    short digit = ReadPositiveNumber("Please enter one digit to check: ");

    cout << "\nDigit " << digit << " Frequency is "
        << CountDigitFrequency(digit, number) << " Time(s).\n";

    return 0;
}