#include "surgeon.hpp"

using namespace std;

void operation(Surgeon surgeon)
{
    string input;
    bool end = false;
    surgeon.scalpel();
    while (!end)
    {
        cout << "Введите команду либо suture чтобы наложить швы и завершить операцию: ";
        cin >> input;
            if (input == "scalpel")
                surgeon.scalpel();
            else if (input == "hemostat")
                surgeon.hemostat();
            else if (input == "tweezers")
                surgeon.tweezers();
            else if (input == "suture")
            {
                surgeon.suture();
                end = true;
            }
            else cout << "Некорректный ввод\n";
    }
}

int main()
{
    Surgeon surgeon;
    operation(surgeon);
}