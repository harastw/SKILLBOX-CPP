#include <iostream>
#include <string>
using namespace std;

void evenDigits(long long ExampleLong, int& ansExample)
{
    if (ExampleLong > 0)
    {
        if ((ExampleLong % 10) % 2 == 0)
        {
            ansExample++;
        }
        ExampleLong /= 10;
        evenDigits(ExampleLong, ansExample);
    }
}

int main()
{
    int ans = 0;
    string input;
    long long number;
    
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if (!isdigit(input[i]))
        {
            cout << "incorrect input\n";
            return 0;
        }
    }
    
    evenDigits(stoll(input), ans);
    cout << ans;
}