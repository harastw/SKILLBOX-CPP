#include "Triangle.hpp"

Triangle::Triangle(double e, double x, double y, int color_number)
{
    edge = e, center_x = x, center_y = y, color = color_number;
}

double Triangle::area()
{
    return edge * edge / 2;
}
double Triangle::rectangle_around_the_shape()
{
    return area() / 2;
}