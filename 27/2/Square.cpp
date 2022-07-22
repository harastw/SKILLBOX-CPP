#include "Square.hpp"

Square::Square(double e, double x, double y, int color_number)
{
    edge = e, center_x = x, center_y = y, color = color_number;
}

double Square::area()
{
    return edge * edge;
}
double Square::rectangle_around_the_shape()
{
    return area();
}