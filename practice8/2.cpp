#include <iostream>
int main()
{
    float hitPoint, firebollPower, resistance;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите последовательно очки здоровья орка и его сопротивление магии. Учтите, что можно ввести числа от 0 до 1: ";
        std::cin >> hitPoint >> resistance;
        if (hitPoint < 0 || resistance < 0 || hitPoint > 1 || resistance > 1) std::cout << "Ожидаются число от 0 до 1\n";
        else checkPassed = 1;
    }
    while (hitPoint > 0)
    {
        checkPassed = 0;
        while (!checkPassed)
        {
            std::cout << "Введите урон от огненного шара: ";
            std::cin >> firebollPower;
            if (firebollPower < 0 || firebollPower > 1) std::cout << "Ожидаются число от 0 до 1\n";
            else checkPassed = 1;
        }
        if (firebollPower > resistance) firebollPower -= resistance;
        else firebollPower = 0;
        hitPoint -= firebollPower;
        std::cout << "Итоговый урон от удара: " << firebollPower << "\n";
        if (hitPoint > 0) std::cout << "Оставшиеся здоровья орка: " << hitPoint << "\n";
        else std::cout << "У орка не осталось здоровья!\n";
    }
}