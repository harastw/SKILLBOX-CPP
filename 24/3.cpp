#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int sec, min;
    bool check_passed = false;
    while (!check_passed)
    {
        cout << "введите количество минут работы таймера: ";
        cin >> min;
        if (min < 0)
        {
            cout << "некорректный ввод\n";
            continue;
        }
        check_passed = true;
    }
    check_passed = false;
    while (!check_passed)
    {
        cout << "введите количество секунд работы таймера: ";
        cin >> sec;
        if (sec < 0)
        {
            cout << "некорректный ввод\n";
            continue;
        }
        check_passed = true;
    }
    sec += min * 60;
    while (sec)
    {
        cout << "осталось " << sec << " секунд\n\n";
        sleep(1);
        sec--;
    }
    cout << "DING! DING! DING!\n";
}