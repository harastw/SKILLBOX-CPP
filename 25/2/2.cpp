#include "computer.h"
using namespace std;

void compute(int arrow[BUFFER_SIZE], int& n)
{
    for (int i = 0; i < BUFFER_SIZE; i++)
        n += arrow[i];
    cout << "managed to compute\n";
}
void write(int arrow[BUFFER_SIZE])
{
    cout << "Enter buffer (8 symbols): ";
    for (int i = 0; i < BUFFER_SIZE; i++)
        cin >> arrow[i];
    cout << "success\n";
}
void read(int arrow[BUFFER_SIZE])
{
    for (int i = 0; i < BUFFER_SIZE; i++)
        cout << arrow[i] << " ";
    cout << "success\n";
}
void save(int arrow[BUFFER_SIZE])
{
    ofstream save_data("data.txt");
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        save_data << arrow[i] << " ";
    }
    save_data.close();
    cout << "saved\n";
}
void load(int arrow[BUFFER_SIZE])
{
    ifstream load_data("data.txt");
    for (int i = 0; i < BUFFER_SIZE; i++)
        load_data >> arrow[i];
    load_data.close();
    cout << "loaded\n";
}
void sum(int arrow[BUFFER_SIZE])
{
    int sum = 0;
    compute(arrow, sum);
    cout << sum << "\n";
}

int main()
{
    string input;
    int buffer[BUFFER_SIZE];
    bool end = false;
    while(!end)
    {
        cout << "enter command: ";
        cin >> input;
        if (input == "end")
            end = true;
        else if (input == "write")
            write(buffer);
        else if (input == "read")
            read(buffer);
        else if (input == "save")
            save(buffer);
        else if (input == "load")
            load(buffer);
        else if (input == "sum")
            sum(buffer);
        else cout << "incorrect\n";
    }
}
