#include "Manager.hpp"

using namespace std;

Manager::Manager(int i, int total_employees)
{
    cout << "Введите имя менеджера\n";
    cin >> name;
    serial_number = i;
    for (int j = 0; j < total_employees; j++)
    {
        Employee new_employee = Employee();
        employees.push_back(new_employee);
    }
}

bool Manager::check()
{
    for (int i = 0; i < employees.size(); i++)
        if (!employees[i].status())
            return false;
    return true;
}

void Manager::get_tasks(Head_Of_The_Company head)
{
    int index = 0;
    while (!check())
    {
        srand(head.task_generation() + serial_number);
        int total_tasks = 1 + rand() % employees.size(); // создание новой задачи;
        for (int i = 0; i < total_tasks && index < employees.size(); i++)
        {
            int type = 1 + rand() % 3;
            Task new_task = Task(type);
            instructions.push_back(make_pair(employees[index], new_task));
            employees[index].get_work();
            cout << employees[index].get_name() << " получил задание!\n";
            index++;
        }
    }
}