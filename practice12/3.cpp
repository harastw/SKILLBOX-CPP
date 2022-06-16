#include <iostream>
#include <cassert>
using namespace std;
float travelTime(float distanceTest, float speedTest)
{
    assert(distanceTest > 0 && speedTest > 0);
    return distanceTest / speedTest;
}
int main()
{
    float distance, speed;
    cout << "enter distance: ";
    cin >> distance;
    cout << "enter speed: ";
    cin >> speed;
    cout << "time is: " << travelTime(distance, speed) << endl;
    return 0;
}