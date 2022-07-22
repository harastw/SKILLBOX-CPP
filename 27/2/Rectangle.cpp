#include "Rectangle.hpp"

Rectangle::Rectangle(double w, double h, double x, double y, int color_number)
{
    width = w, height = h, center_x = x, center_y = y, color = color_number;
}

double Rectangle::area()
{
    return width * height;
}
double Rectangle::rectangle_around_the_shape()
{
    return area();
}