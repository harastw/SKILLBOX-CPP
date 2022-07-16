#include "monitor.cpp"

using namespace std;

int main()
{
    Monitor monitor;
    string input;
    while (true)
    {
        cout << "Введите: move чтобы сместить окно на вектор, resize чтобы изменить размер окна, display чтобы вывести окно и close чтобы выйти\n";
        cin >> input;
        if (input == "move")
            monitor.move();
        else if (input == "resize")
            monitor.resize();
        else if (input == "display")
            monitor.display();
        else if (input == "close")
            exit(EXIT_SUCCESS);
        else
            cout << "Некорректный ввод\n";
    }
}