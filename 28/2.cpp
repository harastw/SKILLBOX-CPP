#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <mutex>

using namespace std;

mutex m;

void train(int index, char names[3], int times[3])
{
    this_thread::sleep_for(chrono::milliseconds(times[index] * 1'000));
    m.lock();
    cout << "Поезд " << names[index] << " прибыл на вокзал\n";
    for (int i = 0; i < 3; i++)
    {
        if (i == index)
            continue;
        else if (times[i] > times[index])
            cout << "Поезд " << names[i] << " ожидает когда вокзал освободится\n";
    }
    
    string input;
    while (input != "depart")
        cin >> input;

    cout << "Поезд " << names[index] << " отбывает с вокзала\n";
    m.unlock();
}

int main()
{
    int times[3];
    char names[] = {'A', 'B', 'C'};

    cout << "Введите время пути поезда " << names[0] << ": ";
    cin >> times[0];
    cout << "Введите время пути поезда " << names[1] << ": ";
    cin >> times[1];
    cout << "Введите время пути поезда " << names[2] << ": ";
    cin >> times[2];

    thread one(train, 0, names, times), two(train, 1, names, times), three(train, 2, names, times);
    one.join(), two.join(), three.join();
}