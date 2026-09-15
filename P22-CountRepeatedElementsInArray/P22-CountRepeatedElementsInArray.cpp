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

void ReadArrayElements(int arr[100], short arrLength)
{
    cout << "\nEnter array elements:\n";
    for (short i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
}

void PrintArrayElements(int arr[100], short arrLength)
{
    for (short i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

short CountRepeatedElementsInArray(int arr[100], short arrLength, int numberToCheck)
{
    short counter = 0;

    for (short i = 0; i < arrLength; i++)
    {
        if (arr[i] == numberToCheck)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    int arr[100];
    short arrLength = ReadPositiveNumber("Enter number of elements: ");

    ReadArrayElements(arr, arrLength);

    cout << "\nOriginal array: ";
    PrintArrayElements(arr, arrLength);

    int numberToCheck = ReadPositiveNumber("\nEnter the number that you want to check: ");

    cout << "\n" << numberToCheck << " is repeated "
        << CountRepeatedElementsInArray(arr, arrLength, numberToCheck)
        << " time(s)\n";

    return 0;
}
