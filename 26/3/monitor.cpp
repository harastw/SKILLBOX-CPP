#include "monitor.hpp"

using namespace std;

void Monitor::move()
{
    int input;
    cout << "введите x для вектора смещения: ";
    cin >> input;
    if (x + input > MONITOR_LENGTH || x + input < 0 || x + input + length > MONITOR_LENGTH)
        cout << "нельзя выйти за границу монитора\n";
    else
    {
        x += input;
        cout << "введите y для вектора смещения: ";
        cin >> input;
        if (y + input > MONITOR_HEIGHT || y + input < 0 || y + input + height > MONITOR_HEIGHT)
            cout << "нельзя выйти за границу монитора\n";
        else
        {
            y += input;
            cout << "Новая координата x = " << x << "\nНовая координата y = " << y << "\n";
        }
    }
}

void Monitor::resize()
{
    cout << "Введите новый размер окна (x, y): ";
    int input1, input2;
    cin >> input1 >> input2;
    if (input1 < 1 || input2 < 1 || x + input1 > MONITOR_LENGTH || y + input2 > MONITOR_HEIGHT)
        cout << "Некорректный размер:\n";
    else
    {
        length = input1, height = input2;
        cout << "Новый размер окна: x = " << length << ", y = " << height << "\n";
    }
}

void Monitor::display()
{
    for (int i = 0; i < MONITOR_HEIGHT; i++)
    {
        for (int j = 0; j < MONITOR_LENGTH; j++)
        {
            if (i >= y && i < y + height && j >= x && j < x + length)
                cout << "1";
            else
                cout << "0";
            cout << " ";
        }
        cout << "\n";
    }
}