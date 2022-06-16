#include <vector>
#include <iostream>
using namespace std;
int inputSize()
{
    int vectorSize;
    cout << "Введите количество элементов: ";
    cin >> vectorSize;
    while (vectorSize < 1)
    {
        cout << "Задан неверный размер" << endl;
        cin >> vectorSize;
    }
    return vectorSize;
}
void inputVector(vector <int>& vectorExample, int vectorSizeExample)
{
    cout << "Введите элементы массива ";
    for (int i = 0; i < vectorSizeExample; i++)
    {
        int new_element;
        cin >> new_element;
        vectorExample.push_back(new_element);
    }
}
void deleteNumber(vector <int>& vectorExample, int numberToRemoveExample)
{
    for (int i = 0; i < vectorExample.size(); i++)
    {
        if (vectorExample[i] == numberToRemoveExample)
        {
            vectorExample.erase(vectorExample.begin() + i);
            --i;
        }
    }
}
void display(vector <int>& vectorExample)
{
    for (int i = 0; i < vectorExample.size(); i++)
        cout << vectorExample[i] << " ";
    cout << endl;
}
int main()
{
    int vectorSize = inputSize();
    vector <int>numbers;
    inputVector(numbers, vectorSize);
    cout << "Введите число для удаления ";
    int numberToRemove;
    cin >> numberToRemove;
    deleteNumber(numbers, numberToRemove);
    display(numbers);
    return 0;
}