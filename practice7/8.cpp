#include <iostream>
#include <string>
int main()
{
    std::string name;
    int charNumber;
    std::cout << "введите своё имя: \n";
    std::cin >> name;
    std::cout << "помогите программе! сколько букв в вашем имени? ";
    std::cin >> charNumber;

    std::cout << "|";
    for (int i = 0; i < charNumber + 2; i++)
    {
        std::cout << "-";
    }
    std::cout << "|\n";

    std::cout << "| " << name << " |\n";

    std::cout << "|";
    for (int i = 0; i < charNumber + 2; i++)
    {
        std::cout << "-";
    }
    std::cout << "|\n";
}