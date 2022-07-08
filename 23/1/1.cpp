#include <iostream>

#define one "Sunday\n"
#define two "Monday\n"
#define three "Tuesday\n"
#define four "Wednesday\n"
#define five "Thursday\n"
#define six "Friday\n"
#define seven "Saturday\n"

using namespace std;

int main()
{
    int input;
    cout << "enter the day of the week: ";
    cin >> input;
    
    switch (input)
    {
        case 1:
            cout << one;
            break;
        case 2:
            cout << two;
            break;
        case 3:
            cout << three;
            break;
        case 4:
            cout << four;
            break;
        case 5:
            cout << five;
            break;
        case 6:
            cout << six;
            break;
        case 7:
            cout << seven;
            break;
        default:
            cout << "incorrect\n";
            break;
    }
}
