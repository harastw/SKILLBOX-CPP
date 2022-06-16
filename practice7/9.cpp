#include <iostream>
int main()
{
    int stringLength, exclamationMarks;
    bool controlPassed = 0;
    while (!controlPassed)
    {
        std::cout << "Введите длину строки: ";
        std::cin >> stringLength;
        std::cout << "Введите количество восклицательных знаков: ";
        std::cin >> exclamationMarks;
        if (stringLength > 0 && exclamationMarks > 0) controlPassed = 1;
        else std::cout << "Ожидались числа больше 0\n";
    }

    for (int i = 1; i <= stringLength; i++)
    {
        if (i >= stringLength / 2 - exclamationMarks / 2 + 1 && i <= stringLength / 2 - exclamationMarks / 2 + exclamationMarks) std::cout << "!";
        else std::cout << "~";
    }
    std::cout << "\n";
}