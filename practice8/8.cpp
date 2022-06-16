#include <iostream>
int main()
{
    int totalBacteria, antibioticDrops, waterDrops, min = 1;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите число бактерий: ";
        std::cin >> totalBacteria;
        std::cout << "Введите число капель антибиотика: ";
        std::cin >> antibioticDrops;
        std::cout << "Введите число капель воды: ";
        std::cin >> waterDrops;
        if (totalBacteria < 0 || antibioticDrops < 0 || waterDrops < 0) std::cout << "Ожидались только положительные числа\n";
        else checkPassed = 1;
    }

    for (; min <= 20; min++)
    {
        totalBacteria = 2 * totalBacteria - totalBacteria * ((float)antibioticDrops / (float)waterDrops);
        if (antibioticDrops > 0) antibioticDrops = (float)antibioticDrops * 0.8;
        std::cout << "Бактерий осталось в конце " << min << " минуты: " << totalBacteria << "\n";
        std::cout << "Концентрация антибиотика в конце " << min << " минуты: " << (float)antibioticDrops / (float)waterDrops << "\n";
    }
}