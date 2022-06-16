#include <iostream>
int main()
{
    int x, y;
    std::cout << "введите ось x: \n";
    std::cin >> x;
    std::cout << "введите ось y: \n";
    std::cin >> y;

    for (int i = 0; i <= y * 2 + 1; i++)
    {
        for (int j = 0; j <= x * 2 + 1; j++)
        {
            if (i == y + 1 && j == x) std::cout << "+";
            else if (i == 0 && j == x) std::cout << "^";
            else if (i == y + 1 && j == x * 2 + 1) std::cout << ">";
            else if (i == y + 1) std::cout << "-";
            else if (j == x) std::cout << "|";
            else std::cout << " ";
        }
        std::cout << "\n";
    }
}