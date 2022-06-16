#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> arrow;
    int input;
    while (true)
    {
        cout << "ввод: ";
        do
        {
            cin >> input;
            if (input == -2) return 0;
            if (input != -1) arrow.push_back(input);
        } while (input != -1);
        if (arrow.size() < 5)
        {
            cout << "не хватает элементов для вывода 5го по возрастанию!\n";
            continue;
        }
        for (int i = 0; i < arrow.size(); i++)
        {
            int indexOfTheMin = i;
            for (int j = i; j < arrow.size(); j++) if (arrow[j] < arrow[indexOfTheMin]) swap(arrow[j], arrow[indexOfTheMin]);
        }
        cout << arrow[4] << "\n";
    }
}