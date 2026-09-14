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

int main()
{
    srand((unsigned)time(NULL));

    cout << "Random number1: " << GetRandomNumber(1, 100) << endl;
    cout << "Random number2: " << GetRandomNumber(1, 100) << endl;
    cout << "Random number3: " << GetRandomNumber(1, 100) << endl;

    return 0;
}
