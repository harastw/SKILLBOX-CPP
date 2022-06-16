#include <iostream>
#include <string>
using namespace std;

int checkPassed(string str)
{
    if (str[0] == '.')
    {
        cout << "Точка стоит первым символом\n";
        return 1;
    }
    else if (str[(str.length() - 1)] == '.')
    {
        cout << "Точка стоит последним символом\n";
        return 1;
    }

    int border;
    bool at = 0, dot = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '@' && !at)
        {
            at = 1;
            border = i + 1;
        }
        else if (str[i] == '@' && at)
        {
            cout << "Больше одной @\n";
            return 1;
        }
    }

    if (str.length() - border > 63 || str.length() - border < 1 || str.length() - (str.length() - border) > 63 || str.length() - (str.length() - border) < 1)
    {
        return 1;
    }

    if (!at)
    {
        cout << "Нет символа @\n";
        return 1;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '.') dot = 0; // Если символ не точка, то следующий символ может быть точкой
        else if (str[i] == '.' && !dot) dot = true;
        else if (str[i] == '.' && dot)
        {
            cout << "Более одной точки подряд\n";
            return 1;
        }

        if (str[i] < '!' || str[i] > '~' || str[i] == ':' || str[i] == '(' || str[i] == ')' || str[i] == '\"' || str[i] == '<' || str[i] == '>'
        || str[i] == ',' || str[i] == ';' || str[i] == '[' || str[i] == ']')
        {
            cout << "Некорректный ввод\n";
            return 1;
        }

        if (i > border && (str[i] == '!' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '&' || str[i] == '\'' || str[i] == '*' || str[i] == '+' || 
        str[i] == '/' || str[i] == '=' || str[i] == '?' || str[i] == '^' || str[i] == '_' || str[i] == '`' || str[i] == '{' || str[i] == '|' || str[i] == '}'
        || str[i] == '~'))
        {
            cout << "Недопустимый символ для второй половины адреса\n";
            return 1;
        }
    }
    return 0;
}

int main()
{
    string input;
    cin >> input;
    if (checkPassed(input) == 1)
    {
        cout << "No\n";
    }
    else cout << "Yes\n";

    return 0;
}