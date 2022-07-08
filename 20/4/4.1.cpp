#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    const unsigned int MAX = 1000, BANKNOTE_TYPES = 6;
    char operation;
    int required, money[] = {0, 0, 0, 0, 0, 0};
    ifstream fin("cash.txt");
    for (int i = 0; i < BANKNOTE_TYPES; i++)
        fin >> money[i];
    fin.close();
    cout << "введите операцию: ";
    cin >> operation;
    if (operation == '+')
    {
        int banknotes = 0;
        for (int i = 0; i < BANKNOTE_TYPES; i++)
            banknotes += money[i];
        while (banknotes < 1000)
        {
            money[rand() % BANKNOTE_TYPES]++;
            banknotes++;
        }
        ofstream fout("cash.txt");
        for (int i = 0; i < BANKNOTE_TYPES; i++)
            fout << money[i] << endl;
        fout.close();
    }
    else if (operation == '-')
    {
        int sumMoney = 0;
        for (int i = 0; i < BANKNOTE_TYPES; i++)
        {
            for (int j = money[i]; j > 0; j--)
            {
                switch (i)
                {
                    case 0:
                        sumMoney += money[i] * 100;
                        break;
                    case 1:
                        sumMoney += money[i] * 200;
                        break;
                    case 2:
                        sumMoney += money[i] * 500;
                        break;
                    case 3:
                        sumMoney += money[i] * 1000;
                        break;
                    case 4:
                        sumMoney += money[i] * 2000;
                        break;
                    case 5:
                        sumMoney += money[i] * 5000;
                        break;
                }
            }
        }

        cout << "сколько снимем денег? ";
        cin >> required;
        if (required <= sumMoney)
        {
            while (required >= 5000 && money[5] > 0)
            {
                money[5]--;
                required -= 5000;
            }
            while (required >= 2000 && money[4] > 0)
            {
                money[4]--;
                required -= 2000;
            }
            while (required >= 1000 && money[3] > 0)
            {
                money[3]--;
                required -= 1000;
            }
            while (required >= 500 && money[2] > 0)
            {
                money[2]--;
                required -= 500;
            }
            while (required >= 200 && money[1] > 0)
            {
                money[1]--;
                required -= 200;
            }
            while (required >= 100 && money[0] > 0)
            {
                money[0]--;
                required -= 100;
            }
            ofstream fout("cash.txt");
            for (int i = 0; i < BANKNOTE_TYPES; i++)
                fout << money[i] << endl;
            fout.close();
        }
        else
            cout << "эта операция невозможна\n";
    }
}