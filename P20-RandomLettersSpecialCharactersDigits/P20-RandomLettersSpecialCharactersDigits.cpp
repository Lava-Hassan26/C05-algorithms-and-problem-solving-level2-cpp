#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter, SpecialCharacter, Digit };

int GetRandomNumber(int from, int to)
{
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

char GetRandomCharacter(enCharType charType)
{
	switch (charType)
	{
	case enCharType::SmallLetter:
		return char(GetRandomNumber(97, 122));

	case enCharType::CapitalLetter:
		return char(GetRandomNumber(65, 90));

	case enCharType::SpecialCharacter:
		return char(GetRandomNumber(33, 47));

	case enCharType::Digit:
		return char(GetRandomNumber(48, 57));
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;

	return 0;
}