#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter, SpecialCharacter, Digit };

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

string GenerateWord(enCharType charType, short wordLength)
{
	string word = "";
	for (short i = 0; i < wordLength; i++)
	{
		word += GetRandomCharacter(charType);
	}
	return word;
}

string GenerateKey(short keyLength)
{
	string key = GenerateWord(enCharType::CapitalLetter, keyLength) + "-";
	key += GenerateWord(enCharType::CapitalLetter, keyLength) + "-";
	key += GenerateWord(enCharType::CapitalLetter, keyLength) + "-";
	key += GenerateWord(enCharType::CapitalLetter, keyLength);

	return key;
}

void PrintKeys(short keyNumbers)
{
	for (short i = 0; i < keyNumbers; i++)
	{
		cout << "Key[" << i+1<< "]: " << GenerateKey(4) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	PrintKeys(ReadPositiveNumber(("Enter the number of keys: ")));

	return 0;
}