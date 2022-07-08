#include <random>
#include <iostream>

int main() {
    std::random_device random_device; // Источник энтропии.
    std::mt19937 generator(random_device()); // Генератор случайных чисел.
    // (Здесь берется одно инициализирующее значение, можно брать больше)

    std::uniform_int_distribution<> distribution(0, 1); // Равномерное распределение [10, 20]

    int x = distribution(generator); // Случайное число.
    std::cout << x << '\n';
}