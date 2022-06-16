#include <iostream>
using namespace std;
const unsigned int SIZE = 12;
void init(bool arrow[SIZE][SIZE]) { for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) arrow[i][j] = true; }
void display(bool arrow[SIZE][SIZE]) 
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arrow[i][j]) cout << "o ";
            else cout << "x ";
        }
        cout << "\n";
    }
}
void pop(bool arrow[SIZE][SIZE])
{
    bool checkPassed = false;
    int target[4];
    while (!checkPassed)
    {
        cout << "Pop it! Enter index: ";
        cin >> target[0] >> target[1] >> target[2] >> target[3];
        if (target[0] < 0 || target[0] >= SIZE || target[1] < 0 || target[1] >= SIZE || target[2] < 0 || target[2] >= SIZE || target[3] < 0 || target[3] >= SIZE)
        {
            cout << "invalid index\n";
            continue;
        }
        for (int i = target[0]; i <= target[2]; i++) for (int j = target[1]; j <= target[3]; j++) arrow[i][j] = false;
        checkPassed = true;
    }
    display(arrow);
}
bool test(bool arrow[SIZE][SIZE], bool finishExample) { for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) if (arrow[i][j] == true) return finishExample; finishExample = true; return finishExample; }
void game(bool arrow[SIZE][SIZE])
{
    bool gameOver = false;
    while (!gameOver)
    {
        pop(arrow);
        gameOver = test(arrow, gameOver);
    }
}
int main()
{
    bool popIt[12][12];  // А что? В сути одно и тоже, но я не смог загуглить как назвать эту плёнку на английском
    init(popIt);
    display(popIt);
    game(popIt);
}