#include <vector>
#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const unsigned int MAX = 1000;
    char operation;
    int required, newElement, sumVector = 0;
    vector<int> inStock;
    ifstream fin("cash.txt");

    if (fin.peek() == ifstream::traits_type::eof())
    {
        int first = rand() % 6;
        switch (first)
        {
            case 0:
                first = 100;
                break;
            case 1:
                first = 200;
                break;
            case 3:
                first = 500;
                break;
            case 4:
                first = 1000;
                break;
            case 5:
                first = 5000;
                break;
        }
        inStock.push_back(first);
    }
    else
    {
        while (!fin.eof())
        {
            fin >> newElement;
            inStock.push_back(newElement);
        }
    }
    fin.close();

    cout << "введите операцию: ";
    cin >> operation;

    if (operation == '+')
    {
        for (int i = inStock.size(); i <= MAX; i++)
        {
            int temp = rand() % 6;
            switch (temp)
            {
                case 0:
                    inStock.push_back(100);
                    break;
                case 1:
                    inStock.push_back(200);
                    break;
                case 3:
                    inStock.push_back(500);
                    break;
                case 4:
                    inStock.push_back(1000);
                    break;
                case 5:
                    inStock.push_back(5000);
                    break;
            }
        }
        ofstream fout("cash.txt");
        for (int i = 0; i < inStock.size(); i++)
        {
            fout << inStock[i] << endl;
        }
        fout.close();
    }
    else if (operation == '-')
    {
        for (int i = 0; i < inStock.size(); i++)
            sumVector += inStock[i];

        cout << "сколько снимем денег? ";
        cin >> required;
        if (required <= sumVector)
        {
            while (required > 0)
            {
                for (int i = 0; i < inStock.size(); i++)
                {
                    if (inStock[i] <= required)
                    {
                        required -= inStock[i];
                        inStock.erase(inStock.begin() + i);
                        break;
                    }
                }
            }
            ofstream fout("cash.txt");
            for (int i = 0; i < inStock.size(); i++)
                fout << inStock[i] << endl;
            fout.close();
        }
        else
        {
            cout << "эта операция невозможна\n";
            return 0;
        }
    }
}