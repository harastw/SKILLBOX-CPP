#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> queue;
    string newPerson, temp, minStr;
    bool end = false;
    int ender = -1, minIndex, nextIndex = 0;

    while (!end)
    {
        cin >> newPerson;
        if (newPerson != "Next")
        {
            ender++;
            queue[ender] = newPerson;
            cout << queue[ender] << " добавлен\n";
            nextIndex = 0;
        }
        else
        {
            for (int j = 0; j <= ender; j++)
            {
                minStr = queue[j];
                minIndex = j;
                for (int k = j; k <= ender; k++)
                {
                    if (queue[k] < minStr)
                    {
                        minStr = queue[k];
                        minIndex = k;
                    }
                }
                temp = queue[j];
                queue[j] = minStr;
                queue[minIndex] = temp;
            }
            cout << queue[nextIndex] << endl;
            nextIndex++;
        }

        cout << "end? (1 - yes | 0 - no)\n";
        cin >> end;
    }
}