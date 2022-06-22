#include <fstream>

int main()
{
    std::ofstream file("a", std::ios::app);
    file << "\nЯ сосу БИ-БУ-БИ-БУ-БИ-БУ-БИ-БУ-БИ-БУ-БИ-БУ";
    file.close();
    exit(EXIT_SUCCESS);
}