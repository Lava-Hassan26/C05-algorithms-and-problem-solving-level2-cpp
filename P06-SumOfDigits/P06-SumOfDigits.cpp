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

int SumOfDigits(int number)
{
    int sum = 0;
    int remainder = 0;

    do
    {
        remainder = number % 10;
        number = number / 10;
        sum += remainder;
    } while (number > 0);

    return sum;
}

void PrintSumOfDigits(int number)
{
    cout << "\nSum of Digits = " << SumOfDigits(number) << endl;
}

int main()
{
    PrintSumOfDigits(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
