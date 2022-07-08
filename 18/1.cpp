#include <vector>
#include <iostream>
using namespace std;

void swapvec(vector<int>& example, int* arrow)
{
    for (int i = 0; i < 5; i++)
    {
        std::swap(*(arrow + i), example[i]);
    }
}

int main()
{
    int a[] = {12, 32, 4, 5};
    vector<int> v = {100, 1000, 10, 1};

    swapvec(v, a);
    for (int i = 0; i < 4; i++)
    {
        cout << "v" << i << " = " << v[i] << "\n" << "a" << i << " = " << a[i] << "\n";
    }
}