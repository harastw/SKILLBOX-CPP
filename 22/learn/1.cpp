#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<int, std::string> apartPerson;
    apartPerson[2] = "Ivanov";
    apartPerson[5] = "Petrov";
    std::cout << apartPerson[5] << std::endl;
}