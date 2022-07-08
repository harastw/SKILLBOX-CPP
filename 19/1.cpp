#include <fstream>
#include <iostream>
#include <string>
int main()
{
    std::string word, search;
    int totalMatches = 0;
    std::ifstream file;
    file.open("/home/ai/code/SKILLBOX/19/words.txt");

    std::cout << "Search: ";
    std::cin >> search;

    while (!file.eof())
    {
        file >> word;
        if (word == search) totalMatches++;
    }
    std::cout << totalMatches;
    file.close();
}