#include "Circle.cpp"

class Rectangle: public Figure
{
private:
    double width, height;
public:
    Rectangle(double w, double h, double x, double y, int color_number);

    double area();
    double rectangle_around_the_shape();
};