#include <iostream>
int main()
{
    const unsigned int SIZE = 4;
    float matrix[SIZE][SIZE], arrow[SIZE], newArrow[] = {0, 0, 0, 0};
    std::cout << "enter matrix(4x4): ";
    for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) std::cin >> matrix[i][j];
    std::cout << "enter vector: ";
    for (int i = 0; i < SIZE; i++) std::cin >> arrow[i];
    for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) newArrow[i] += matrix[i][j] * arrow[j];
    std::cout << "new vector: ";
    for (int i = 0; i < SIZE; i++) std::cout << newArrow[i] << " ";
    std::cout << "\n";
}