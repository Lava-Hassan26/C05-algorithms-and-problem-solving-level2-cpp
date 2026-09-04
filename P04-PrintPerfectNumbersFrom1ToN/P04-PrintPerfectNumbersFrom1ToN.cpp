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

void PrintPerfectNumbersFrom1ToN(int N)
{
    cout << "\nPerfect Numbers from 1 to " << N << " are:\n";

    for (int i = 1; i <= N; i++)
    {
        if (IsPerfectNumber(i))
            cout << i << endl;
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
