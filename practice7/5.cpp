#include <iostream>
int main()
{
    int totalBacteria, drops, hour = 1;
    bool correctness = 0;
    while (!correctness)
    {
        std::cout << "Введите число бактерий: ";
        std::cin >> totalBacteria;
        std::cout << "Введите число капель антибиотика: ";
        std::cin >> drops;
        if (totalBacteria < 0 || drops < 0) std::cout << "Ожидались только положительные числа\n";
        else correctness = 1;
    }

    for (int killRate = 10; killRate > 0 && totalBacteria > 0; killRate--)
    {
        totalBacteria *= 2;
        totalBacteria -= drops * killRate;
        if (killRate <= 0) std::cout << "Антибиотик перестал действовать\n";
        else if (totalBacteria <= 0) std::cout << "Все бактерии умерли за " << hour << " часа\n";
        else
        {
            std::cout << "Бактерий осталось в конце " << hour << " часа: " << totalBacteria << "\n";
            hour++;
        }
    }
}