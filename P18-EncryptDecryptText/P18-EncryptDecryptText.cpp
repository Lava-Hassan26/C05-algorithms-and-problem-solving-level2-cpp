#include <iostream>
#include <string>

using namespace std;

string ReadString(string message)
{
	string word = "";
	cout << message;
	getline(cin, word);
	return word;
}

string EncryptText(string text, short EncryptionKey)
{
	string encryptedText = "";

	for (int i = 0; i < text.length(); i++)
	{
		encryptedText += char(text[i] + EncryptionKey);
	}
	return encryptedText;
}

string DecryptText(string text, short DecryptionKey)
{
	string DecryptedText = "";

	for (int i = 0; i < text.length(); i++)
	{
		DecryptedText += char(text[i] - DecryptionKey);
	}
	return DecryptedText;
}

int main()
{
	string text = ReadString("Enter a text: ");
	string encryptedText = EncryptText(text, 2);
	string decryptedText = DecryptText(encryptedText, 2);

	cout << "\nOriginal text        : " << text << endl;
	cout << "Text after encryption: " << encryptedText << endl;
	cout << "Text after decryption: " << decryptedText << endl;

	return 0;
}
