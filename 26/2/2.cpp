#include "phone.hpp"

using namespace std;

int main()
{
    Phone phone;
    string input, number;
    while (true)
    {
        cout << "enter command: ";
        cin >> input;
        if (input == "call")
        {
            cout << "enter number: ";
            cin >> number;
            phone.call(number);
        }
        else if (input == "sms")
        {
            cout << "enter number: ";
            cin >> number;
            phone.sms(number);
        }
        else if (input == "add")
        {
            cout << "enter number: ";
            cin >> number;
            phone.add(number);
        }
        else if (input == "exit")
            exit(EXIT_SUCCESS);
        else cout << "incorrect input\n";
    }
}