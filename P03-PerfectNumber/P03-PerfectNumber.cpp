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

bool IsPerfectNumber(int number)
{
    int sum = 0;

    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return number == sum;
}

void PrintResult(int number)
{
    cout << endl;
    if (IsPerfectNumber(number))
        cout << number << " is Perfect.\n";
    else
        cout << number << " is NOT Perfect.\n";
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}