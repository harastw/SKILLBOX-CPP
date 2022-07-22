#include "Employee.cpp"

using namespace std;

class Head_Of_The_Company: public Person
{
private:
    int generator;

public:
    Head_Of_The_Company(string s);

    // Глава вводит число, из которого будут созданы задачи
    int task_generation();
};