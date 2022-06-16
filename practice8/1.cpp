#include <iostream>
int main()
{
    float m, t, f, a, s;
    std::cout << "введите f, t, m космического корабля: ";
    std::cin >> m >> t >> f;
    a = f/m, s = a*(t*t)/(float)2;
    std::cout << s << "\n";
}