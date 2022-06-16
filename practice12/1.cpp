#include <iostream>
#include <string>
#include <cctype> 
/* В задании указано не подключать ничего кроме iostream и string, но мне было предложено ознакомиться с этой библиотекой: к тому же, она
не мешает показать знания о сути задачи */
using namespace std;

bool isNumber(string& s)
{
    for (char &ch : s) {
        if (isdigit(ch) == 0)
            return false;
    }
    return true;
}

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
            string inputNumbers;
            cin >> inputNumbers;
            if (isNumber(inputNumbers))
            {
                numbers[i] = stoi(inputNumbers);
                if (numbers[i] >= 1 && numbers[i] <= 10) checkPassed = true;
            }
            if (!checkPassed) cout << "incorrect input!\n";
        }
        cout << surnames[numbers[i]-1] << endl;
    }
}