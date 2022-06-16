#include <iostream>
using namespace std;

int func(int& a, int& b)
{
    a++;
    return b;
}

int main()
{
    int number1, number2;
    cin >> number1 >> number2;
    cout << func(number1, number2) << endl << number1 << endl;
    
    return 0;
}