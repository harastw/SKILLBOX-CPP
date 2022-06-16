#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    float speed = 0, difference;
    bool end = false;
    do
    {
        cin >> difference;
        if (speed + difference < 0.1) end = true;
        else if (speed + difference > 150) cout << "Автомобиль не может разогнаться настолько быстро!\n";
        else
        {
            speed += difference;
            cout << "скорость - " << floor(speed * 10) / 10.0 << " км\n";
        }
    } while (!end);
    cout << "Автомобиль остановился\n";
}