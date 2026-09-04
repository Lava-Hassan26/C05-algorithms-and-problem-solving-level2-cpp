#include <iostream>
#include <iomanip>

using namespace std;

void PrintTableTitle()
{
    cout << "\n\t\t\t Multiplication Table 1 to 10\n\n";
}

void PrintColumnHeaders()
{
    for (short i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }
    cout << endl;
}

void PrintSeparatorLine(short length)
{
    for (short i = 0; i < length; i++)
    {
        cout << "_";
    }
    cout << "\n";
}

void PrintMultiplicationTable()
{
    PrintTableTitle();
    PrintColumnHeaders();
    PrintSeparatorLine(90);

    for (short i = 1; i <= 10; i++)
    {
        cout << " " << left << setw(2) << i << "   |";
        for (short j = 1; j <= 10; j++)
        {
            cout << "\t" << i * j;
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();

    return 0;
}
