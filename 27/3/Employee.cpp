#include "Employee.hpp"

using namespace std;

Employee::Employee()
{
    cout << "Введите имя сотрудника: ";
    cin >> name;
}

bool Employee::status()
{
    return busy;
}

void Employee::get_work()
{
    busy = true;
}

string Employee::get_name()
{
    return name;
}