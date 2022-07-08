#include <iostream>
#include <string>
int main()
{
    // Как я понял, клетки по середине две клетки: 10, 8 и 11, 8 - выбрал в качестве центра 10, 8  
    int x = 10, y = 8;
    std::string route;
    bool continuation = 1;
    std::cout << "ваши начальные координаты (x, y) равны: " << x << " " << y << "\n";

    while (continuation)
    {
        std::cout << "в какую сторону направить робота: север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D)\n";
        std::cin >> route;

        if (route == "W")
        {
            if (y == 15)
            {
                std::cout << "робот упёрся в стену и дальше в ту сторону не поедет!\n";
            }
            else y++;
        }
        else if (route == "S")
        {
            if (y == 1)
            {
                std::cout << "робот упёрся в стену и дальше в ту сторону не поедет!\n";
            }
            y--;
        }
        else if (route == "A")
        {
            if (x == 1)
            {
                std::cout << "робот упёрся в стену и дальше в ту сторону не поедет!\n";
            }
            x--;
        }
        else if (route == "D")
        {
            if (x == 20)
            {
                std::cout << "робот упёрся в стену и дальше в ту сторону не поедет!\n";
            }
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

/*
                    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                  .                    |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |                                       |
                    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
*/