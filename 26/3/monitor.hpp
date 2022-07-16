#include <iostream>
#include <string>
#include <vector>

#define MONITOR_LENGTH 8
#define MONITOR_HEIGHT 5

using namespace std;

class Monitor
{
private:
    int x = 0, y = 0, length = 2, height = 2;

public:
    void move();
    void resize();
    void display();
};