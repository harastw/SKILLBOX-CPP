#include <iostream>
#include <string>
using namespace std;

int ipCheck(string str)
{
    if (str[0] == '.')
    {
        cout << "Точка вначале\n";
        return 1;
    }
    else if (str[str.length() - 1] == '.')
    {
        cout << "Лишняя точка на конце\n";
        return 1;
    }

    string tempStr;
    int amountNumbers = 1;
    bool dot = false, firstIsZero = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[0] == '0' && i == 0)
        {
            firstIsZero = true;
            tempStr += str[i];
            continue;
        }

        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && 
        str[i] != '8' && str[i] != '9' && str[i] != '.')
        {
            cout << "Посторонние символы вместо чисел и точек\n";
            return 1;
        } else if (str[i] != '.')
        {
            if (firstIsZero)
            {
                cout << "Лишние нули\n";
                return 1;
            } else if (str[i] == '0' && dot) firstIsZero = true;

            dot = false;
            tempStr += str[i];
        }
        else
        {
            if (firstIsZero) firstIsZero = false;
            if (!dot)
            {
                dot = true;
                if (stoi(tempStr) > 255)
                {
                    cout << "Есть числа больше 255\n";
                    return 1;
                }
                else
                {
                    amountNumbers++;
                    tempStr.clear();
                }
            }
            else
            {
                cout << "Две точки подряд\n";
                return 1;
            }
        }
    }
    if (amountNumbers != 4)
    {
        cout << "Должно быть 4 числа\n";
        return 1;
    }
    return 0;
}

int main()
{
    string ip;
    cin >> ip;
    if (ipCheck(ip) == 0) cout << "Valid\n";
    else cout << "Invalid\n";
    return 0;
}