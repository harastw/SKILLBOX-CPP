#include "iostream"
#include <string>
#include <ctime>
#include <vector>

#define EXIT "exit"
#define BEGIN "begin"
#define END "end"
#define STATUS "status"

using namespace std;

int main()
{
    string input_command, task_name;
    vector<string> name_list;
    vector<int> time_list;
    bool time_tracking = false;
    int new_time, last_index;

    while ( true )
    {
        bool check_passed = false;
        while (!check_passed)
        {
            cout << "Ожидание ввода: ";
            cin >> input_command;
            if (input_command != "begin" && input_command != "end" && input_command != "status" && input_command != "exit")
            {
                cout << "Некорректный ввод\n";
                continue;
            }
            check_passed = true;
        }
        if (input_command == EXIT)
            exit(EXIT_SUCCESS);
        else if (input_command == BEGIN)
        {
            if (time_tracking)
            {
                new_time = time(NULL) - new_time;
                time_list.push_back(new_time);
            }
            else
                time_tracking = true;

            cout << "Введите имя задачи: ";
            cin >> task_name;
            name_list.push_back(task_name);

            new_time = time(NULL);
        }
        else if (input_command == END)
        {
            if (time_tracking)
            {
                new_time = time(NULL) - new_time;
                time_list.push_back(new_time);
                time_tracking = false;

                int last_index = time_list.size() - 1;
                cout << name_list[last_index] << ": " << time_list[last_index] << "\n";
            }
        }
        else if (input_command == STATUS)
        {
            for (int i = 0; i < time_list.size(); i++)
                cout << name_list[i] << ": " << time_list[i] << "\n";
            if (time_tracking)
                    cout << "текущая задача: " << name_list[name_list.size() - 1] << endl;
        }
    }
}