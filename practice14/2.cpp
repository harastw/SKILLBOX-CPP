#include <iostream>
using namespace std;
int main()
{
    bool playerX = true;
    const int SIZE = 3;
    int amountMoves = 1;
    int index[2];
    char map[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    while (amountMoves <= SIZE*3)
    {
        bool checkPassed = false;
        while (!checkPassed)
        {
            cout << "enter index: ";
            cin >> index[0] >> index[1];
            if (index[0] < 0 || index[1] < 0 || index[0] > 2 || index[1] > 2 || map[index[0]][index[1]] == 'X' || map[index[0]][index[1]] == 'O') cout << "error, try again!\n";
            else checkPassed = true;
        }

        if (playerX)
        {
            map[index[0]][index[1]] = 'X';
            playerX = false;
        }
        else
        {
            map[index[0]][index[1]] = 'O';
            playerX = true;
        }

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                cout << map[i][j] << " ";
            }
            cout << "\n";
        }

        if (map[0][0] == 'X' && map[0][1] == 'X' && map[0][2] == 'X' || map[1][0] == 'X' && map[1][1] == 'X' && map[1][2] == 'X' || map[0][0] == 'X' && map[0][1] == 'X' && map[0][2] == 'X'
         || map[0][0] == 'X' && map[1][0] == 'X' && map[2][0] == 'X' || map[0][1] == 'X' && map[1][1] == 'X' && map[2][1] == 'X' || map[0][2] == 'X' && map[1][2] == 'X' && map[2][2] == 'X')
        {
            cout << "X win!\n";
            return 0;
        }
        else if (map[0][0] == 'O' && map[0][1] == 'O' && map[0][2] == 'O' || map[1][0] == 'O' && map[1][1] == 'O' && map[1][2] == 'O' || map[0][0] == 'O' && map[0][1] == 'O' && map[0][2] == 'O'
        || map[0][0] == 'O' && map[1][0] == 'O' && map[2][0] == 'O' || map[0][1] == 'O' && map[1][1] == 'O' && map[2][1] == 'O' || map[0][2] == 'O' && map[1][2] == 'O' && map[2][2] == 'O')
        {
            cout << "O win!\n";
            return 0;
        }
        amountMoves++;
    }
    cout << "Nobody!\n";
}