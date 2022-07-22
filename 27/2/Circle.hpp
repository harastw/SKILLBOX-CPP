#include "Figure.hpp"

class Circle: public Figure
{
private:
    double r = 1;

public:
    Circle(double radius, double x, double y, int color_number);

    double area();
    double rectangle_around_the_shape();
};