#include <iostream>
#include <string>
using namespace std;

string encrypt_caesar(string str, int number)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            int tempKey = number;
            char tempChar = str[i];
            if (tempChar >= 'A' && tempChar <= 'Z')
            {
                while (tempChar + tempKey > 'Z')
                {
                    tempKey = (tempKey - ('Z' - tempChar)) - 1;
                    tempChar = 'A';
                }
                while (tempChar + tempKey < 'A')
                {
                    tempKey += (tempChar - 'A') + 1;
                    tempChar = 'Z';
                }
            }
            else
            {
                while (tempChar + tempKey > 'z')
                {
                    tempKey = (tempKey - ('z' - tempChar)) - 1;
                    tempChar = 'a';
                }
                while (tempChar + tempKey < 'a')
                {
                    tempKey += (tempChar - 'a') + 1;
                    tempChar = 'z';
                }
            }
            str[i] = tempChar + tempKey;
        }
    }
    return str;
}
string decrypt_ceaser(string str, int number)
{
    return encrypt_caesar(str, -number);
}

int main()
{
    string enteredString, enteredString2;
    int key;
    cout << "Введите строку: ";
    getline(cin, enteredString);
    cout << "Введите ключ: ";
    cin >> key;
    cout << encrypt_caesar(enteredString, key) << "\n";
    enteredString2 = encrypt_caesar(enteredString, key);
    cout << decrypt_ceaser(enteredString2, key) << "\n";

    
    return 0;
}