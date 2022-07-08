#include <fstream>
#include <iostream>
int main()
{
    const unsigned int SIZE = 4;
    char buffer[SIZE];
    std::string path;
    std::ifstream file;

    std::cout << "Path: ";
    std::cin >> path;
    file.open(path, std::ios::binary);

    if (!file.is_open())
    {
        std::cout << "incorrect path!\n";
        return 0;
    }

    file.read(buffer, sizeof(buffer));
    if (buffer[1] == 'P' && buffer[2] == 'N' && buffer[3] == 'G')
    {
        std::cout << "This png\n";
        exit(EXIT_SUCCESS);
    }
    std::cout << "this is not a png\n";
    exit(EXIT_SUCCESS);
}