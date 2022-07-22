#include "Person.cpp"

using namespace std;

class Employee: public Person
{
private:
    bool busy = false;

public:
    Employee();

    bool status();

    void get_work();

    string get_name();
};