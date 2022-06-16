#include <iostream>
int main()
{
    int i = 1;
    long double amplitude, finalAmplitude;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите последовательно начальную амплитуду колебания в сантиметрах и конечную амплитуду, которая считается остановкой маятника\n";
        std::cin >> amplitude >> finalAmplitude;
        if (amplitude < 0 || finalAmplitude < 0) std::cout << "Не предпологается ввода отрицательного числа\n";
        else checkPassed = 1;
    }
    for (; amplitude > finalAmplitude; i++)
    {
        amplitude -= amplitude / 100 * 8.4;
        std::cout << "Маятник качнулся в " << i << " раз и теперь его амплитуда колебания " << amplitude << "\n";
    }
    std::cout << "Маятник \"остановится\" когда качнётся " << i << " раз\n";
}