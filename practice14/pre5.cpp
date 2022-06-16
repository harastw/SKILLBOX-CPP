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
    int target[2];
    while (!checkPassed)
    {
        cout << "Pop it! Enter index: ";
        cin >> target[0] >> target[1];
        if (target[0] < 0 || target[0] >= SIZE || target[1] < 0 || target[1] >= SIZE) cout << "invalid index\n";
        else if (arrow[target[0]][target[1]] == false) cout << "already burst!\n";
        else checkPassed = true;
    }
    arrow[target[0]][target[1]] = false;
    display(arrow);
}
bool test(bool arrow[SIZE][SIZE], bool finishExample) { for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) if (arrow[i][j] == true) return finishExample; finishExample = true; return finishExample; }
void game(bool arrow[SIZE][SIZE])
{
    bool gameOver = false;
    while (!gameOver)
    {
        pop(arrow);
        test(arrow, gameOver);
    }
}
int main()
{
    bool popIt[12][12];  // А что? В сути одно и тоже, но я не смог загуглить как назвать эту плёнку на английском
    init(popIt);
    display(popIt);
    game(popIt);
}
/*

Программа заключается в последовательном лопании целых регионов пузырьков. Перед каждым таким лопанием надо показывать пользователю полностью всю плёнку: o — это
целый пузырёк, x — лопнутый. Это тоже надо выделить в отдельную функцию. Итак, как выглядит само лопание. Пользователь вводит две координаты: начала региона и конца региона.
Процедура лопания пузырей должна быть реализована с помощью отдельной функции, все аргументы должны проверяться на валидность, что они в в рамках диапазона возможных значений,
иначе должна быть выведена ошибка. После лопания каждого пузыря, который не был ещё лопнут до того, в консоль должно выводиться сообщение “Pop!”.

*/