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

void PrintLetterPattern(int number)
{
    cout << endl;

    for (short i = 1; i <= number; i++)
    {
        for (short j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}
