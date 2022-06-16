#include <iostream>
#include <string>
int main()
{
    std::string number;
    int totalChar, totalDigit = 0;
    bool checkPassed = true, dot = false, finish = false;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (number[0] != '0' && number[0] != '1' && number[0] != '2' && number[0] != '3' && number[0] != '4' && number[0] != '5' && number[0] != '6' && number[0] != '7'
     && number[0] != '8' && number[0] != '9' && number[0] != '-' && number[0] != '.') checkPassed = 0;

    totalChar = number.length();
    for (int i = 1; i < totalChar && !finish; i++)
    {
        if (number[i] != '0' && number[i] != '1' && number[i] != '2' && number[i] != '3' && number[i] != '4' && number[i] != '5' && number[i] != '6' && number[i] != '7'
         && number[i] != '8' && number[i] != '9' && number[i] != '.') finish = true;
         
        if (!dot && number[i] == '.') dot = true;
        else if (dot && number[i] == '.') checkPassed = false;

        if (number[i] == '0' || number[i] == '1' || number[i] == '2' || number[i] == '3' || number[i] == '4' || number[i] == '5' || number[i] == '6' || number[i] == '7'
         || number[i] == '8' || number[i] == '9') totalDigit++;
    }
    if (totalDigit == 0) checkPassed = false;
    if (checkPassed) std::cout << "Корректная запись\n";
    else std::cout << "Некорректная запись\n";
}