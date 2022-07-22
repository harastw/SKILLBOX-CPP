#include "Circle.hpp"

Circle::Circle(double radius, double x, double y, int color_number)
{
    r = radius, center_x = x, center_y = y;
}

double Circle::area()
{
    return 2 * 3.14 * r * r;
}

double Circle::rectangle_around_the_shape()
{
    return 4 * r * r;
}