#include <iostream>
#include <vector>
#include <string>
#include <ctime>

#define DAY 24*60*60
#define MONTH DAY*30
#define YEAR MONTH*12

#define BIS birthdays_in_sec

using namespace std;

struct Birthdays_list
{
private:
    vector<string> birthdays, names;
    vector<int> birthdays_in_sec;

    int size = birthdays.size(), next_birthday_index = 0;
    int& NBI = next_birthday_index;

public:
    int sum_sec(string s)
    {
        int sec = 0, i = 0;
        string temp;
        
        for (; s[i] != '.'; i++)
            temp.push_back(s[i]);
        sec += (stoi(temp)) * DAY;
        
        i++;
        temp.clear();
        for (; s[i] != '.'; i++)
            temp.push_back(s[i]);
        sec += (stoi(temp)) * MONTH;

        i++;
        temp.clear();
        for (; i < size; i++)
            temp.push_back(s[i]);
        sec += (stoi(temp)) * YEAR;

        return sec;
    }

    void write_in_sec()
    {
        for (int i = 0; i < size; i++)
            birthdays_in_sec.push_back(sum_sec(birthdays[i]));
    }

    void enter_list(string s, bool a)
    {
        while (!a)
        {
            cout << "Введите имя друга или end чтобы прекратить ввод имён и дат: ";
            cin >> s;
            if (s == "end")
                a = true;
            else
            {
                names.push_back(s);
                cout << "enter date: ";
                cin >> s;
                birthdays.push_back(s);
            }
        }
    }

    void next_birthday(int time)
    {
        for (int i = 0; i < size; i++)
        {
            if (BIS[i] < time)
                continue;
            else if (BIS[i] < BIS[NBI])
                NBI = i;
        }
    }

    void output_names(int time)
    {
        next_birthday(time);
        for (int i = 0; i < size; i++)
            if (BIS[i] == BIS[NBI])
                cout << names[i] << "\n";
    }

    int getSize()
    {
        return size;
    }
};

struct User
{
    bool end = false;
    string input;
    int current_time = time(NULL);
};

int main()
{
    Birthdays_list list;
    User user;

    list.enter_list(user.input, user.end);
    if (list.getSize() == 0)
        return 0;

    list.write_in_sec();
    list.output_names(user.current_time);
    
}