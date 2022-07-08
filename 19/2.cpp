#include <fstream>
#include <iostream>
#include <string>
int main()
{
    std::string path, word, text ="";
    std::ifstream file;

    std::cout << "Path: ";
    std::cin >> path;
    file.open(path);

    if (!file.is_open())
    {
        std::cout << "incorrect path!\n";
        return 0;
    }

    while (!file.eof())
    {
        while (getline(file, word));
        text += word;
    }
    std::cout << text;
    file.close();
}