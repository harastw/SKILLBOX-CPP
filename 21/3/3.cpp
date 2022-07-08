#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Vector
{
    double x = 1, y = 1;

    void add(Vector v2)
    {
        x += v2.x, y += v2.y;
    }

    void subtract(Vector v2)
    {
        x -= v2.x, y -= v2.y;
    }

    void scale(double n)
    {
        x *= n, y *= n;
    }

    double length()
    {
        return sqrt(x * x + y * y);
    }

    void normalize()
    {
        double invLength = 1 / length();
        scale(invLength);
    }
};

int main()
{
    double scale = 2;
    Vector myVector;
    string operation;
    cout << "enter operation: ";
    cin >> operation;

    cout << "enter x for vector: ";
    cin >> myVector.x;
    cout << "enter y for vector: ";
    cin >> myVector.y;

    if (operation == "add")
    {
        Vector myVector2;
        cout << "enter x for vector2: ";
        cin >> myVector2.x;
        cout << "enter y for vector2: ";
        cin >> myVector2.y;
        myVector.add(myVector2);
    }
    else if (operation == "subtract")
    {
        Vector myVector2;
        cout << "enter x for vector2: ";
        cin >> myVector2.x;
        cout << "enter y for vector2: ";
        cin >> myVector2.y;
        myVector.subtract(myVector2);
    }
    else if (operation == "scale")
        myVector.scale(scale);
    else if (operation == "length")
    {
        cout << "length is " << myVector.length() << endl;
        return 0;
    }
    else if (operation == "normalize")
        myVector.normalize();
    
    cout << "x: " << myVector.x << "\ny: " << myVector.y << endl;
}