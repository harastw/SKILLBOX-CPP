#include <iostream>
#include <cmath>
int main()
{
    float x, y, z; 
    int totalCubes, maxCubesInSet;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите последовательно x, y, z бруска: ";
        std::cin >> x >> y >> z;
        if (x <= 0 || y <= 0 || z <= 0) std::cout << "Ожидались числа больше нуля\n";
        else checkPassed = 1;
    }
    totalCubes = ((int)x / 5) * ((int)y / 5) * ((int)z / 5);
    maxCubesInSet = std::pow(totalCubes, 1.0 / 3.0);
    maxCubesInSet *= maxCubesInSet * maxCubesInSet;

    std::cout << "Из этого бруска можно изготовить: " << totalCubes << " кубиков\n";
    std::cout << "Из них можно составить набор из " << maxCubesInSet << " кубиков\n";
}