#include <string>
#include <iostream>
using namespace std;
int main()
{
    string input, numberOne, numberTwo;
    bool checkPassed = false, negative = false;
    int i = 0;
    double n1, n2;

    cin >> input;
    if (input[0] == '-')
    {
        negative = true;
        i++;
        while (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/') 
            i++;
    }
    else
    {
        while (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/')
            i++;  
    }

    if (input[i+1] == '-')
    {
        cout << "Второе число ожидается положительным, ведь уже есть знак минус в роли оператора вычитания\n";
        return 0;
    }
    
    int j;
    if (input[0] == '-') j = 1;
    else j = 0;

    while (j < i)
    {
        numberOne += input[j];
        j++;
    }

    n1 = stod(numberOne);
    if (negative) n1 = -n1;

    j = i + 1;
    for (; j < input.size(); j++)
        numberTwo += input[j];
    n2 = stod(numberTwo);

    if (input[i] == '+')
        cout << n1 + n2 << "\n";
    else if (input[i] == '-')
        cout << n1 - n2 << "\n";
    else if (input[i] == '*')
        cout << n1 * n2 << "\n";
    else if (input[i] == '/')
        cout << n1 / n2 << "\n";
}