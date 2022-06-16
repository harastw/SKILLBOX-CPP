#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum, maxSum = 0, maxI = 0, maxJ;
    for (int i = 0; i <= a.size(); i++) for (int j = i; j <= a.size(); j++)
    {
        sum = 0;
        for (int k = i; k <= j; k++) sum += a[k];
        if (sum > maxSum)
        {
            maxSum = sum;
            maxI = i;
            maxJ = j;
        }
    }
    cout << maxI << " " << maxJ << "\n";
}