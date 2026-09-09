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

void PrintInvertedLetterPattern(int number)
{
    cout << endl;

    for (short i = number; i > 0; i--)
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
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}
