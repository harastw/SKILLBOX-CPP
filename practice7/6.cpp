#include <iostream>
int main()
{
    int height, width;
    std::cout << "введите высоту: \n";
    std::cin >> height;
    std::cout << "введите ширину: \n";
    std::cin >> width;

    for (int i = 0; i < height; i++)
    {
        std::cout << "|";
        for (int j = 0; j < width; j++)
        {
            if (i == height - 1 || i == 0) std::cout << "-";
            else std::cout << " ";
        }
        std::cout << "|\n";
    }
}