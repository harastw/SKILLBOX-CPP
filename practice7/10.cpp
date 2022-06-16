#include <iostream>
int main()
{
    int height, length;
    bool controlPassed = 0;
    while (!controlPassed)
    {
        std::cout << "Введите высоту треугольника: ";
        std::cin >> height;
        if (height > 0) controlPassed = 1;
        else std::cout << "Ожидалось положительное число\n";
    }

    for (int i = 1; i <= height; i++)
    {
        for (int j = height; j > 0; j--)
        {
            if (j >= i) std::cout << " ";
            else std::cout << "#";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}