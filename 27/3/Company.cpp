#include "Company.hpp"

using namespace std;

Company::Company()
{
    cout << "Введите количество команд и сотрудников: ";
    cin >> total_teams >> total_employees;
    for (int i = 0; i < total_teams; i++)
    {
        Manager new_manager = Manager(i, total_employees);
        managers.push_back(new_manager);
    }
}

void Company::work(Head_Of_The_Company head)
{
    for (int i = 0; i < total_teams; i++)
        managers[i].get_tasks(head);
}