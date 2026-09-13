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

bool GuessA3LetterPassword(string Password)
{
    string word = "";
    int counter = 0;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {

            for (int k = 65; k <= 90; k++)
            {
                counter++; 
                word = "";
                word += char(i);
                word += char(j);
                word += char(k);

                cout << "Trial [" << counter << "]: " << word << endl;

                if (word == Password)
                {
                    cout << "\nPassword is: " << Password << endl;
                    cout << "Found at trial " << counter << endl;
                    return true;
                }        
            }
        }   
    }
    return false;
}

int main()
{
    GuessA3LetterPassword(ReadString("Enter a password from AAA to ZZZ: "));

    return 0;
}
