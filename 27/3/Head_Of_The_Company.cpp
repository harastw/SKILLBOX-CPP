#include "Head_Of_The_Company.hpp"

using namespace std;

Head_Of_The_Company::Head_Of_The_Company(string s)
{
    name = s;
}

int Head_Of_The_Company::task_generation()
{
    cout << "Введите зерно для генерации задачи: ";
    cin >> generator;
    return generator;
}