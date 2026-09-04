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

void PrintAllDigitsFrequency(int number)
{
    cout << endl;

    for (short i = 0; i <= 9; i++)
    {
        short frequency = CountDigitFrequency(i, number);

        if (frequency > 0)
        {
            cout << "Digit " << i << " Frequency is " << frequency << " Time(s).\n";
        }
    }
}

int main()
{
    int number = ReadPositiveNumber("Please enter the main number: ");

    PrintAllDigitsFrequency(number);

    return 0;
}