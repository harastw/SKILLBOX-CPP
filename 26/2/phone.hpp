#include "phone.h"

using namespace std;

bool Phone::correct_number(string n)
{
    if (n.size() != 11)   
        return false;
    else if (n[0] != '7')
        return false;
    else
    {
        for (int i = 0; i < n.size(); i++)
            if (!isdigit(n[i]))
                return false;
    }
    return true;
}

void Phone::call(string n)
{
    if (correct_number(n))
        cout << "CALL " << book[n] << "\n";
    else cout << "incorrect number\n";
}
void Phone::sms(string n)
{
    if (correct_number(n))
    {
        string message;
        cout << "enter message: ";
        cin >> message;
        cout << "SMS " << book[n] << ": " << message << "\n";
    }
    else cout << "incorrect number\n";
}
void Phone::add(string n)
{
    string name;
    if (correct_number(n))
    {
        cout << "enter name: ";
        cin >> name;
        book.insert(make_pair(n, name));
        cout << "complete\n";
    }
    else cout << "incorrect number\n";
}