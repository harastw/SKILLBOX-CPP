#include "Manager.cpp"

using namespace std;

class Company
{
private:
    vector<Manager> managers;
    int total_teams, total_employees;

public:
    Company();

    void work(Head_Of_The_Company head);
};