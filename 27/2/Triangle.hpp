#include "Square.cpp"

class Triangle: public Figure
{
private: 
    double edge = 1;

public:
    Triangle(double e, double x, double y, int color_number);

    double area();
    double rectangle_around_the_shape();
};