#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Branch
{
private:
    string name;
    int size;

public:
    void init();
    string get_name();
};