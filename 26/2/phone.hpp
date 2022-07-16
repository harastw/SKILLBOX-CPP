#include <iostream>
#include <string>
#include <map>

using namespace std;

class Phone
{
private:
    map<string, string> book;

    bool correct_number(string n);

public:
    void call(string n);
    void sms(string n);
    void add(string n);
};