#include "Head_Of_The_Company.cpp"

using namespace std;

class Manager: public Person
{
private:
    vector<Employee> employees;
    vector<pair<Employee, Task>> instructions;
    int serial_number;

public:
    Manager(int i, int total_employees);

    bool check();
    
    void get_tasks(Head_Of_The_Company head);
};