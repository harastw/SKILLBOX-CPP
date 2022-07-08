#include "check_functions.h"
#include <vector>
using namespace std;
struct Birthdays_list
{
private:
    vector<string> birthdays, names;
    int size;
public:
    void enter_list(string s, bool a)
    {
        while (!a)
        {
            bool check_passed = false;
            while (!check_passed)
            {
                cout << "Введите имя или end для конца ввода: ";
                cin >> s;
                if (!isname(s))
                {
                    cout << "Некорректный ввод\n";
                    continue;
                }
                check_passed = true;
            }
            if (s == "end")
                a = true;
            else
            {
                names.push_back(s);
                check_passed = false;
                while (!check_passed)
                {
                    cout << "Введите день рождения: ";
                    cin >> s;
                    if (!isdate(s))
                    {
                        cout << "Некорректный ввод\n";
                        continue;
                    }
                    check_passed = true;
                }
                birthdays.push_back(s);
            }
        }
        size = birthdays.size();
    }
    void next_birthday()
    {
        time_t now = time(0);
        tm * ltm = localtime(&now);
        long int month = static_cast<long int> (1 + ltm->tm_mon);
        long int day = static_cast<long int> (ltm->tm_mday);
        vector<int> days, months;

        for (int i = 0; i < size; i++)
        {
            // cout << ((int)birthdays[i][0] - '0') * 10 + ((int)birthdays[i][1] - '0') << "\n";
            days.push_back(((int)birthdays[i][0] - '0') * 10 + ((int)birthdays[i][1] - '0'));
            // cout << ((int)birthdays[i][3] - '0') * 10 + ((int)birthdays[i][4] - '0') << "\n";
            months.push_back(((int)birthdays[i][3] - '0') * 10 + ((int)birthdays[i][4] - '0'));
        }

        vector<int> ad, am; // ad - actually days | am - actually month
        vector<string> an; // an - actually names
        for (int i = 0; i < size; i++)
            if (month <= months[i] || month == months[i] && day <= days[i])
            {
                ad.push_back(days[i]);
                am.push_back(months[i]);
                an.push_back(names[i]);
            }

        int mi = 0, as = ad.size(); // as - actually size | mi - min index
        for (int i = 0; i < as; i++)
            if (am[mi] > am[i] || am[mi] > am[i] && ad[mi] > ad[i])
                mi = i;
        
        cout << an[mi] << " скоро будет праздновать день рождения!\n";
        for (int i = 0; i < as; i++)
        {
            if (i == mi)
                continue;
            if (am[i] == am[mi] && ad[i] == ad[mi])
                cout << an[i] << " скоро будет праздновать день рождения!\n";
        }
        if (am[mi] == month && ad[mi] == day)
            cout << "и это будет сегодня!\n";
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
};
int main()
{
    Birthdays_list list;
    User user;
    list.enter_list(user.input, user.end);
    if (list.getSize() == 0)
        return 0;
    list.next_birthday();
}
/*

Подоборка тестов

Простой тест
kek
10.07
lol
11.08
a
01.01
b
12.12
end

У нескольких людей день рождения в один день и этот день сегодня
a
вводим сегодняшний день
b
вводим сегодняшний день
end

*/