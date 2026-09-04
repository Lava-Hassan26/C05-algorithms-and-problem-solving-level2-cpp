#include <iostream>
#include <cmath>
using namespace std;

enum enNumberType { Prime, NotPrime };

short ReadPositiveNumber(string message)
{
    short number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

enNumberType CheckPrime(short number)
{
    if (number == 1)
        return enNumberType::NotPrime;
    short M = round(number / 2);

    for (short i = 2; i <= M; i++)
    {
        if (number % i == 0)
            return enNumberType::NotPrime;
    }
    return enNumberType::Prime;
}

void PrintPrimeNumbersFrom1ToN(short number)
{
    cout << "\nAll Prime Numbers From 1 to " << number << ": {";
    for (short i = 1; i <= number; i++)
    {
        if (CheckPrime(i) == enNumberType::Prime)
            cout << " " << i;
    }
    cout << " }\n\n";
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter a number: "));

    return 0;
}