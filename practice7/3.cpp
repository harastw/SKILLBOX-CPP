#include <iostream>
#include <string>
int main()
{
    std::string select;
    int milk, water, totalCups = 0;
    bool correctness = 0;
    while (correctness != 1)
    {
        std::cout << "Введите, сколько миллилитров молока залито в кофемашину: ";
        std::cin >> milk;
        std::cout << "Введите, сколько миллилитров воды залито в кофемашину: ";
        std::cin >> water;
        if (milk < 0 || water < 0) std::cout << "ожидается положительное число\n";
        else correctness = 1;
    }

    while (water >= 300 || water >= 30 && milk >= 270)
    {
        correctness = 0;
        while (correctness != 1)
        {
            std::cout << "Желаете американо или латте? ";
            std::cin >> select;
            if (select == "американо")
            {
                correctness = 1;
                if (water >= 300)
                {
                    std::cout << "Ваш напиток готов\n";
                    water -= 300;
                    totalCups++;
                }
                else std::cout << "Не хватает воды\n";
            }
            else if (select == "латте")
            {
                correctness = 1;
                if (milk >= 270 && water >= 30)
                {
                    std::cout << "Ваш напиток готов\n";
                    water -= 30;
                    milk -= 270;
                    totalCups++;
                }
                else
                {
                    if (milk < 270) std::cout << "Не хватает молока\n";
                    if (water < 30) std::cout << "Не хватает воды\n";
                }
            }
            else std::cout << "ожидается ввод слова \"американо\" или \"латте\"\n";
        }
    }
    std::cout << "У вас не хватает воды и молока ни для латте, ни для американо!\n";
    std::cout << "Остаток воды: " << water << "\nОстаток молока: " << milk << "\n";
    std::cout << "Всего чаек кофе выдано: " << totalCups << "\n";
}