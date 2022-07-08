#include <iostream>
#include <string>

using namespace std;

bool isdate(string s)
{
    int total_dot = 0;
    int s_size = s.size();
    bool dot = false;

    for (int i = 0; i < s_size; i++)
    {
        if (dot && s[i] == '.')
            return false;
        else if (dot && s[i] != '.')
            dot = false;
        else if (!dot && s[i] == '.')
        {
            dot = true;
            total_dot++;
        }
    }
    if (total_dot != 1)
        return false;

    string temp;
    int i = 0;
    for (; s[i] != '.'; i++)
        temp.push_back(s[i]);
    int temp_to_int = stoi(temp);
    temp.clear();
    if (temp_to_int < 1 && temp_to_int > 31)
        return false;
    i++;
    for (; i < s_size; i++)
        temp.push_back(s[i]);
    temp_to_int = stoi(temp);
    if (temp_to_int < 1 && temp_to_int > 12)
        return false;
    
    return true;
}

bool isnumber(string s)
{
    int s_size = s.size();
    for (int i = 0; i < s_size; i++)
        if (!isdigit(s[i]))
            return false;
    return true;
}

bool isname(string s)
{
    int s_size = s.size();
    for (int i = 0; i < s_size; i++)
        if (isdigit(s[i]))
            return false;
    return true;
}