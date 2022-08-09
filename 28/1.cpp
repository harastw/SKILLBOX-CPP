#include <thread>
#include <mutex>
#include <chrono>
#include <string>
#include <iostream>

const unsigned int TOTAL_TRACKS = 6;
const unsigned int TOTAL_METERS = 100;

using namespace std;

mutex m;

void swim(string name, int speed, int index, int times[TOTAL_TRACKS])
{
    int time = 0;
    for (int i = 0; i < TOTAL_METERS; i += speed)
    {
        this_thread::sleep_for(chrono::milliseconds(1000));
        m.lock();
        cout << name << " проплыл " << i << " метров\n";
        m.unlock();
        time++;
    }
    m.lock();
    times[index] = time;
    m.unlock();
}

void result(string names[TOTAL_TRACKS], int times[TOTAL_TRACKS])
{
    int min;
    for (int i = 0; i < TOTAL_TRACKS; i++)
    {
        min = i;
        for (int j = i; j < TOTAL_TRACKS; j++)
            if (times[j] < times[min])
            {
                m.lock();
                swap(times[min], times[j]);
                swap(names[min], names[j]);
                m.unlock();
            }
    }
            
    for (int i = 1; i < TOTAL_TRACKS; i++)
        cout << i << " место: " << names[i] << " - " << times[i] << " секунд\n";
}

int main()
{
    string names[TOTAL_TRACKS];
    int speeds[TOTAL_TRACKS], times[TOTAL_TRACKS];
    for (int i = 0; i < TOTAL_TRACKS; i++)
    {
        cout << "Введите имя и скорость " << i << " пловца: ";
        cin >> names[i] >> speeds[i];
    }
    thread track1(swim, names[0], speeds[0], 0, times);
    thread track2(swim, names[1], speeds[1], 1, times);
    thread track3(swim, names[2], speeds[2], 2, times);
    thread track4(swim, names[3], speeds[3], 3, times);
    thread track5(swim, names[4], speeds[4], 4, times);
    thread track6(swim, names[5], speeds[5], 5, times);
    track1.join();
    track2.join();
    track3.join();
    track4.join();
    track5.join();
    track6.join();

    result(names, times);
}