#include <iostream>
#include <string>
using namespace std;
void winner(char symbol, string input, bool& win, bool& end)
{
    if (input[0] == symbol && input[1] == symbol && input[2] == symbol) win = true;
    if (input[3] == symbol && input[4] == symbol && input[5] == symbol && !win) win = true;
    else if (input[3] == symbol && input[4] == symbol && input[5] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
    if (input[6] == symbol && input[7] == symbol && input[8] == symbol && !win) win = true;
    else if (input[6] == symbol && input[7] == symbol && input[8] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
    if (input[0] == symbol && input[3] == symbol && input[6] == symbol && !win) win = true;
    else if (input[0] == symbol && input[3] == symbol && input[6] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
    if (input[1] == symbol && input[4] == symbol && input[7] == symbol && !win) win = true;
    else if (input[1] == symbol && input[4] == symbol && input[7] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
    if (input[2] == symbol && input[5] == symbol && input[8] == symbol && !win) win = true;
    else if (input[2] == symbol && input[5] == symbol && input[8] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
    if (input[0] == symbol && input[4] == symbol && input[8] == symbol && !win) win = true;
    else if (input[0] == symbol && input[4] == symbol && input[8] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
    if (input[2] == symbol && input[4] == symbol && input[6] == symbol && !win) win = true;
    else if (input[2] == symbol && input[4] == symbol && input[6] == symbol && win)
    {
        cout << "Incorrect\n";
        end = true;
    }
}
int main()
{
    string line1, line2, line3, field;
    int amountX=0, amountO=0, amountDot=0;
    bool winX = false, winO = false, endAll = false;
    cin >> line1 >> line2 >> line3;
    field = line1 + line2 + line3;
    if (line1.length() != 3 || line2.length() != 3 || line3.length() != 3)
    {
        cout << "Incorrect\n";
        return 1;
    }
    for (int i = 0; i < field.length(); i++)
    {
        if (field[i] == 'X') amountX++;
        if (field[i] == 'O') amountO++;
        if (field[i] == '.') amountDot++;
    }
    if (amountX > amountO+1 || amountO > amountX)
    {
        cout << "Incorrect\n";
        return 1;
    }
    winner('X', field, winX, endAll);
    if (endAll) return 0;
    winner('O', field, winO, endAll);
    if (endAll) return 0;

    if (winX && winO)
    {
        cout << "Incorrect\n";
        return 1;
    }
    if (winX && amountO != amountX - 1)
    {
        cout << "Incorrect\n";
        return 1;
    }
    else if (winO && amountX != amountO)
    {
        cout << "Incorrect\n";
        return 1;
    }
    else if (!winO && !winX)
    {
        cout << "Nobody\n";
        return 0;
    } else if (winX) cout << "Petya won\n";
    else if (winO) cout << "Vanya won\n";
}