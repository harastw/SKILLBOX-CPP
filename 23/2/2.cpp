#include <iostream>

#define one "winter\n"
#define two "spring\n"
#define three "summer\n"
#define four "autumn\n"

using namespace std;

#if 1
int main()
{
    int input;
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
    }

}
#endif