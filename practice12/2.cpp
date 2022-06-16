#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 15;
    int index;
    float temp;
    float list[15];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "enter " << i << " element: ";
        cin >> list[i];
    }
    float max;
    for (int i = 0; i < SIZE; i++)
    {
        max = list[i];
        for (int j = i; j < SIZE; j++)
        {
            if (list[j] > max) 
            {
                index = j;
                max = list[j];
                temp = list[index];
                list[index] = list[i];
                list[i] = temp;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " element(new): " << list[i] << endl;
    }
    cout << endl;
    return 0;
}