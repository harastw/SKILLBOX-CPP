#include <vector>
#include <iostream>
using namespace std;
void display(vector <int>& vectorExample)
{
    for (int i = 0; i < vectorExample.size(); i++)
        cout << vectorExample[i] << " ";
    cout << endl;
}
int main()
{
    const unsigned int SIZE = 20;
    vector<int> db;
    int new_element;
    bool end = false;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> new_element;
        if (new_element == -1)
        {
            --i;
            display(db);
        }
        else db.push_back(new_element);
    }
    while(!end)
    {
        cin >> new_element;
        if (new_element == -1) display(db);
        else db = {db[1], db[2], db[3], db[4], db[5], db[6], db[7], db[8], db[9], db[10], db[11], db[12], db[13], db[14], db[15], db[16], db[17], db[18], db[19], new_element};
        cout << "end?(1 - yes; 0 - no)\n";
        cin >> end;
    }
}