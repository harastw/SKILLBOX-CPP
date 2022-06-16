#include <vector>
#include <iostream>
using namespace std;
int absoluteValue(int& number) { if (number < 0) number = -number; return number; }
int main()
{
    vector<int> arrow = {-100, -50, -5, 1, 10, 15}, arrowStart;
    arrowStart = arrow;
    for (int i = 0; i < arrow.size(); i++)
    {
        int indexOfTheMin = i;
        for (int j = i; j < arrow.size(); j++) if (absoluteValue(arrow[j]) < arrow[indexOfTheMin]) swap(arrow[j], arrow[indexOfTheMin]);
    }
    for (int i = 0; i < arrow.size(); i++) for (int j = 0; j < arrow.size(); j++) if (arrow[i] == -arrowStart[j]) arrow[i] = -arrow[i];
    for (int i = 0; i < arrow.size(); i++) cout << arrow[i] << " ";
    cout << "\n";
}