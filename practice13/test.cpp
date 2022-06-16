#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int removeIndex;
    cin >> removeIndex;
    vector<int> vec;

    vec.push_back(6);
    vec.push_back(-17);
    vec.push_back(12);

    // Deletes the second element (vec[1])
    vec.erase(vec.begin() + removeIndex);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << i << " element is: " << vec[i] << endl;
    }

    return 0;
}