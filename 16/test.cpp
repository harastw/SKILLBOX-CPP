#include <iostream>  
#include <string>
#include <sstream>  
using namespace std;

const unsigned int AMOUNT = 4;

void inputAll(string S)
{
    cout << "Введите температуру снаружи, внутри, есть ли движение снаружи и включен ли в доме свет: ";
    string T, temp[AMOUNT]; int i = 0;

    getline(cin, S);
    stringstream X(S); 

    while (getline(X, T, ' '))
    {
        temp[i] = T;
        i++;
    }

    i = 0;
    for (; i < AMOUNT; i++) cout << temp[i] << "\n";
}

int main()
{
    string S;
    inputAll(S);
}