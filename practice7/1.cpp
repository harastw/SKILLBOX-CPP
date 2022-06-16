#include <iostream>
int main()
{
    int months = 0;
    for (int buckwheatKg = 100; buckwheatKg > 0; buckwheatKg -= 4)
    {
        months++;
        std::cout << "гречки осталось: " << buckwheatKg << "\n"; 
    }
    std::cout << "месяцев прошло: " << months << "\n";
}