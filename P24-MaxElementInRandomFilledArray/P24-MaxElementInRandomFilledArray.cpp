#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int GetRandomNumber(int from, int to)
{
    int randNumber = rand() % (to - from + 1) + from;
    return randNumber;
}

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

void FillArrayWithRandomNumbers(int arr[100], short arrLength)
{
    for (short i = 0; i < arrLength; i++)
    {
        arr[i] = GetRandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], short arrLength)
{
    for (short i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int MaxElementInArray(int arr[100], short arrLength)
{
    int max = 0;
    for (short i = 0; i < arrLength; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    short arrLength = ReadPositiveNumber("Enter number of elements: ");

    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);

    cout << "\nMax Number is: " << MaxElementInArray(arr, arrLength) << endl;

    return 0;
}