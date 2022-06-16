#include <iostream>
int main()
{
    int totalKilometers, averagePaceMinutes;
    float averagePaceSeconds, pace, paceAmount = 0;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите количество километров, покрытое за тренировку: ";
        std::cin >> totalKilometers;
        if (totalKilometers <= 0) std::cout << "Ожидалось число больше нуля\n";
        else checkPassed = 1;
    }
    for (int i = 1; i <= totalKilometers; i++)
    {
        checkPassed = 0;
        while (!checkPassed)
        {
            std::cout << "Введите темп в секундах на " << i << " километре\n";
            std::cin >> pace;
            if (pace < 0) std::cout << "Не может быть отрицательное число\n";
            else checkPassed = 1;
        }
        paceAmount += pace;
    }

    averagePaceSeconds = paceAmount / (float)totalKilometers;
    averagePaceMinutes = (int)averagePaceSeconds / 60;
    averagePaceSeconds -= (float)averagePaceMinutes;

    std::cout << "Средний темп в минутах за всю тренировку: " << averagePaceMinutes
    << "\n минут, " << averagePaceSeconds << " секунд\n";
}