#include <iostream>
#include <string>
int main()
{
    std::string number;
    int totalChar, totalDigit = 0;
    bool checkPassed = true, dot = false, finish = false;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (!isdigit(number[0]) && number[0] != '-' && number[0] != '.') checkPassed = 0;

    totalChar = number.length();
    for (int i = 0; i < totalChar && !finish; i++)
    {
        if (!isdigit(number[i]) && number[i] != '.') finish = true;
         
        if (!dot && number[i] == '.') dot = true;
        else if (dot && number[i] == '.') checkPassed = false;

        if (isdigit(number[i])) totalDigit++;
    }
    if (totalDigit == 0) checkPassed = false;
    if (checkPassed) std::cout << "Корректная запись\n";
    else std::cout << "Некорректная запись\n";
}