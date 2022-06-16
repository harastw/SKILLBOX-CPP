#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int number;
    cin >> number;
    cout << fact(number) << endl;
    return 0;
}