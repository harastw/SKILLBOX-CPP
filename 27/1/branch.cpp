#include "branch.hpp"

using namespace std;

void Branch::init()
{
    cout << "введите имя жителя жителя либо None чтобы не заселять ветку: ";
    cin >> name;
}

string Branch::get_name()
{
    return name;
}