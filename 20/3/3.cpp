#include <fstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool searchFish(string name, vector<string> list)
{
    for (int i = 0; i < list.size(); i++)
        if (list[i] == name)
            return true;
    return false;
}

int main()
{
    fstream file;
    string inputName, newFish;
    vector<string> availableFish;
    cin >> inputName;

    file.open("river.txt");
    while (!file.eof())
    {
        file >> newFish;
        availableFish.push_back(newFish);
    }

    if (!searchFish(inputName, availableFish))
        return 0;
    file.close();
    
    file.open("basket.txt", ios::app);
    file << inputName << endl;
    file.close();

    exit(EXIT_SUCCESS);
}