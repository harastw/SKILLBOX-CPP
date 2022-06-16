#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line1, line2, line3, field;
    int amountX=0, amountO=0, amountDot=0;
    bool winX = false, winO = false;
    cin >> line1 >> line2 >> line3;
    field = line1 + line2 + line3;

    if (line1.length() != 3 || line2.length() != 3 || line3.length() != 3)
    {
        cout << "Incorrect 1\n";
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
        cout << "Incorrect 2\n";
        return 1;
    }

    if (field[0] == 'X' && field[1] == 'X' && field[2] == 'X') winX = true;

    if (field[3] == 'X' && field[4] == 'X' && field[5] == 'X' && !winX) winX = true;
    else if (field[3] == 'X' && field[4] == 'X' && field[5] == 'X' && winX)
    {
        cout << "Incorrect 00\n";
        return 1;
    }

    if (field[6] == 'X' && field[7] == 'X' && field[8] == 'X' && !winX) winX = true;
    else if (field[6] == 'X' && field[7] == 'X' && field[8] == 'X' && winX)
    {
        cout << "Incorrect 01\n";
        return 1;
    }

    if (field[0] == 'X' && field[3] == 'X' && field[6] == 'X' && !winX) winX = true;
    else if (field[0] == 'X' && field[3] == 'X' && field[6] == 'X' && winX)
    {
        cout << "Incorrect 02\n";
        return 1;
    }

    if (field[1] == 'X' && field[4] == 'X' && field[7] == 'X' && !winX) winX = true;
    else if (field[1] == 'X' && field[4] == 'X' && field[7] == 'X' && winX)
    {
        cout << "Incorrect 03\n";
        return 1;
    }

    if (field[2] == 'X' && field[5] == 'X' && field[8] == 'X' && !winX) winX = true;
    else if (field[2] == 'X' && field[5] == 'X' && field[8] == 'X' && winX)
    {
        cout << "Incorrect 04\n";
        return 1;
    }

    if (field[0] == 'X' && field[4] == 'X' && field[8] == 'X' && !winX) winX = true;
    else if (field[0] == 'X' && field[4] == 'X' && field[8] == 'X' && winX)
    {
        cout << "Incorrect 05\n";
        return 1;
    }

    if (field[2] == 'X' && field[4] == 'X' && field[6] == 'X' && !winX) winX = true;
    else if (field[2] == 'X' && field[4] == 'X' && field[6] == 'X' && winX)
    {
        cout << "Incorrect 06\n";
        return 1;
    }

    if (field[0] == 'O' && field[1] == 'O' && field[2] == 'O') winO = true;

    if (field[3] == 'O' && field[4] == 'O' && field[5] == 'O' && !winO) winO = true;
    else if (field[3] == 'O' && field[4] == 'O' && field[5] == 'O' && winO)
    {
        cout << "Incorrect 00\n";
        return 1;
    }

    if (field[6] == 'O' && field[7] == 'O' && field[8] == 'O' && !winO) winO = true;
    else if (field[6] == 'O' && field[7] == 'O' && field[8] == 'O' && winO)
    {
        cout << "Incorrect 01\n";
        return 1;
    }

    if (field[0] == 'O' && field[3] == 'O' && field[6] == 'O' && !winO) winO = true;
    else if (field[0] == 'O' && field[3] == 'O' && field[6] == 'O' && winO)
    {
        cout << "Incorrect 02\n";
        return 1;
    }

    if (field[1] == 'O' && field[4] == 'O' && field[7] == 'O' && !winO) winO = true;
    else if (field[1] == 'O' && field[4] == 'O' && field[7] == 'O' && winO)
    {
        cout << "Incorrect 03\n";
        return 1;
    }

    if (field[2] == 'O' && field[5] == 'O' && field[8] == 'O' && !winO) winO = true;
    else if (field[2] == 'O' && field[5] == 'O' && field[8] == 'O' && winO)
    {
        cout << "Incorrect 04\n";
        return 1;
    }

    if (field[0] == 'O' && field[4] == 'O' && field[8] == 'O' && !winO) winO = true;
    else if (field[0] == 'O' && field[4] == 'O' && field[8] == 'O' && winO)
    {
        cout << "Incorrect 05\n";
        return 1;
    }

    if (field[2] == 'O' && field[4] == 'O' && field[6] == 'O' && !winO) winO = true;
    else if (field[2] == 'O' && field[4] == 'O' && field[6] == 'O' && winO)
    {
        cout << "Incorrect 06\n";
        return 1;
    }

    if (winX && winO)
    {
        cout << "Incorrect 3\n";
        return 1;
    }

    if (winX && amountO != amountX - 1)
    {
        cout << "Incorrect 4\n";
        return 1;
    }
    else if (winO && amountX != amountO)
    {
        cout << "Incorrect 5\n";
        return 1;
    }
    else if (!winO && !winX)
    {
        cout << "Nobody\n";
        return 0;
    } else if (winX) cout << "Petya won\n";
    else if (winO) cout << "Vanya won\n";
}