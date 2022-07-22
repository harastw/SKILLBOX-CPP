#include "Company.cpp"

using namespace std;

int main()
{
    string name;
    cout << "Введите имя главы компании: ";
    cin >> name;
    Head_Of_The_Company head = Head_Of_The_Company(name);


    Company company = Company();
    company.work(head);
}