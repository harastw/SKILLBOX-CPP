#include <iostream>
#include <string>

using namespace std;

struct Point
{
    double x = 0, y = 0;
};

class Surgeon
{
private:
    void enter_point(Point& point1);
    
public:
    void scalpel();

    void hemostat();

    void tweezers();

    void suture();
};