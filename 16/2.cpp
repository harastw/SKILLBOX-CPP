#include <string>
#include <iostream>
using namespace std;
int main()
{
    string input;
    bool checkPassed = false;
    double floatPart, integerPart;
    int amountSymbols;
    cout << "Введите целую часть: ";
    cin >> input;
    integerPart = stod(input);
    cout << "Введите дробную часть: ";
    while (!checkPassed)
    {
        cin >> input;
        floatPart = stod(input);
        if (floatPart < 0) cout << "ожидалось положительное число, так как это не начало финального числа\n";
        else checkPassed = true;
    }
    amountSymbols = input.size();
    for (int i = 0; i < amountSymbols; i++)
    {
        floatPart /= 10;
    }
    if (integerPart >= 0) cout << integerPart + floatPart << "\n";
    else
    {
        floatPart = - floatPart;
        cout << integerPart + floatPart << "\n";
    }
}