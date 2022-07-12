#include "computer.h"
using namespace std;

void compute(int arrow[BUFFER_SIZE], int& n)
{
    for (int i = 0; i < BUFFER_SIZE; i++)
        n += arrow[i];
}
void write(int arrow[BUFFER_SIZE])
{
    for (int i = 0; i < BUFFER_SIZE; i++)
        cin >> arrow[i];
}
void read(int arrow[BUFFER_SIZE])
{
    for (int i = 0; i < BUFFER_SIZE; i++)
        cout << arrow[i] << " ";
    cout << "\n";
}
void save(int arrow[BUFFER_SIZE])
{
    ofstream save_data("data.txt");
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        save_data << arrow[i] << " ";
    }
    save_data.close();
}
void load(int arrow[BUFFER_SIZE])
{
    ifstream load_data("data.txt");
    for (int i = 0; i < BUFFER_SIZE; i++)
        load_data >> arrow[i];
    load_data.close();
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