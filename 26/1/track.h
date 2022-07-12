#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Track
{
private:
    string name, date;
    int duration;

public:
    void init(string s1, string s2, int number);

    int get_duration();

    string get_name();

    string get_date();
};