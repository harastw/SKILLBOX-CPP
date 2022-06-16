#include <iostream>
#include <string>
using namespace std;
int main()
{
    string surnames[10];
    int numbers[3];
    for (int i = 0; i < 10; i++)
    {
        bool checkPassed = false;
        while (!checkPassed)
        {
            cin >> surnames[i];
            for (int j = 0; j < surnames[i].length(); j++)
            {
                if (isalpha(surnames[i][j])) checkPassed = true;
            }
            if (!checkPassed) cout << "incorrect input!\n";
        }
    }
    for (int i = 0; i < 3; i++)
    {
        bool checkPassed = false;
        while (!checkPassed)
        {
            cin >> numbers[i];
            if (numbers[i] >= 1 && numbers[i] <= 10) checkPassed = true;
            if (!checkPassed) cout << "incorrect input!\n";
        }
        cout << surnames[numbers[i]-1] << endl;
    }
}