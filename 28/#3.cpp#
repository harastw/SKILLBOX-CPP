#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

mutex m;
vector<string> orders, food;

void order_generation()
{
    int sleep, gen;

    while (true)
    {
        sleep = rand() % 10 + 5;
        gen = rand() % 5 + 1;
        m.lock();
        switch (gen)
        {
            case 1:
                cout << "заказана пицца\n";
                orders.push_back("пицца");
                break;
            case 2:
                cout << "заказан суп\n";
                orders.push_back("суп");
                break;
            case 3:
                cout << "заказан стейк\n";
                orders.push_back("стейк");
                break;
            case 4:
                cout << "заказан салат\n";
                orders.push_back("салат");
                break;
            case 5:
                cout << "заказаны суши\n";
                orders.push_back("суши");
                break;
        }
        m.unlock();
        this_thread::sleep_for(chrono::milliseconds(sleep * 1'000));
    }
}

void kitchen()
{
    int i = 0, time;
    while (true)
    {
        this_thread::sleep_for(chrono::milliseconds(1'000));
        time = rand() % 15 + 5;
        m.lock();
        cout << "кухня начала готовить " << orders[i] << "\n";
        this_thread::sleep_for(chrono::milliseconds(time * 1'000));
        food.push_back(orders[i]);
        cout << "кухня закончила готовить " << orders[i] << "\n";
        m.unlock();
        i++;
    }
}

int main()
{
    srand(time(NULL));
    thread orders_th(order_generation), kitchen_th(kitchen);
    int counter = 0;
    while (counter < 10)
    {
        this_thread::sleep_for(chrono::milliseconds(30'000));
        m.lock();
        cout << "курьер забрал " << food[counter] << "\n";
        m.unlock();
        counter++;
    }
    orders_th.detach(), kitchen_th.detach();
}