#include <cmath>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    const unsigned int SIZE = 12;
    enum Notes { DO=1, RE, MI, FA, SOL, LA, SI };
    string combo, out;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> combo;
        for (int j = 0; j < combo.length(); j++)
        {
            int ChToInt = combo[j] - '0';
            Notes newNote = static_cast<Notes>(ChToInt);
            if (newNote == DO) out += "DO";
            else if (newNote == RE) out += "RE";
            else if (newNote == MI) out += "MI";
            else if (newNote == FA) out += "FA";
            else if (newNote == SOL) out += "SOL";
            else if (newNote == LA) out += "LA";
            else if (newNote == SI) out += "SI"; 
            out += " ";  
        }
        out += "\n";
        combo.clear();
    }
    cout << out;
}