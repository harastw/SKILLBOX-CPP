#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<char> loh;
    string loh2;
    cin >> loh2;
    int a[26];
    for (int i = 0; i < 26; i++)
        a[i] = 0;
    for (int i = 0; i < loh2.size(); i++)
        loh.push_back(loh2[i]);
    for (int i = 0; i < 26; i++)
        a[loh[i] - 97]++;
    for (int i = 0; i < 26; i++)
        cout << a[i] << "\n";
}