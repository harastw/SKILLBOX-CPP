#include <vector>
#include <iostream>
using namespace std;
int main()
{
    const unsigned int RESULT = 9;
    vector<int> a = {2, 7, 11, 15};
    for (int i = 0; i <= a.size(); i++) for (int j = i; j <= a.size(); j++)
    {
        if (a[i] + a[j] == RESULT)
        {
            cout << a[i] << " " << a[j] << "\n";
            return 0;
        }
    }
}