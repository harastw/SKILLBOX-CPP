#include "surgeon.h"

using namespace std;

void Surgeon::enter_point(Point& point1)
{
    cout << "введите координаты точки (x, y): ";
    cin >> point1.x >> point1.y;
}

void Surgeon::scalpel()
{
    Point point1, point2;
    enter_point(point1);
    enter_point(point2);
    cout << "Сделан разрез между точкой x=" << point1.x << ", y=" << point1.y << " и точкой x="
        << point2.x << ", y=" << point2.y << endl; 
}

void Surgeon::hemostat()
{
    Point point1;
    enter_point(point1);
    cout << "Сделан зажим в точке x=" << point1.x << ", y=" << point1.y << endl;
}

void Surgeon::tweezers()
{
    Point point1;
    enter_point(point1);
    cout << "Пинцет применён в точке x=" << point1.x << ", y=" << point1.y << endl;
}

void Surgeon::suture()
{
    cout << "Наложены швы. Операция завершена\n";
}