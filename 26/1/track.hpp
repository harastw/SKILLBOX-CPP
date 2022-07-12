#include "track.h"

using namespace std;

void Track::init(string s1, string s2, int number)
{
    name = s1, date = s2, duration = number;
}

int Track::get_duration()
{
    return duration;
}

string Track::get_name()
{
    return name;
}

string Track::get_date()
{
    return date;
}