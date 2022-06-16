#include <iostream>
#include <string>
// Допустим, что 1 а.е. это примерно 149597870700 метров
int main()
{
    long x = 149597870700 * 0.001, y = 0;
    std::string route;
    bool continuation = 1;
    std::cout << "ваши начальные координаты (x, y) равны: " << x << " " << y << "\n";

    while (continuation)
    {
        std::cout << "в какую сторону направить робота: север (клавиша W), юг (клавиша S),";
        std::cout << " запад (клавиша A) или восток (клавиша D)\n";
        std::cin >> route;

        if (route == "W")
        {
            y++;
        }
        else if (route == "S")
        {
            y--;
        }
        else if (route == "A")
        {
            x--;
        }
        else if (route == "D")
        {
            x++;
        }
        else
        {
            std::cout << "ожидалcя ввод букв W, S, A, или D\n";
            continue;     
        }
        std::cout << "ваши новые координаты (x, y) равны: " << x << " " << y << "\n";
        std::cout << "продолжить (1 - да; 0 - нет)?\n";
        std::cin >> continuation;
    }

}

// Это задание вроде было! Может вы обновили задания? Я всё-таки оставлю эту задачу тут