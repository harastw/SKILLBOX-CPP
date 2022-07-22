#include "Triangle.cpp"

using namespace std;

int main()
{
    string input;
    int color_number;
    double x, y, a;
    cout << "введите название фигуры, которую хотите создать(треугольник, квадрат, круг, прямоугольник): ";
    cin >> input;
    if (input == "треугольник")
    {
        cout << "введите ребро треугольника: ";
        cin >> a;
        cout << "введите номер цвета фигуры(1.Красный 2.Синий 3.Зелёный): ";
        cin >> color_number;
        cout << "введите центр фигуры(x и y): ";
        cin >> x >> y;
        Triangle triangle(a, x, y, color_number);
        cout << "Введите операцию с фигурой(1.площадь, 2.площадь прямоугольника описывающего фигуру): ";
        cin >> a;
        if (a == 1)
            cout << triangle.area() << "\n";
        else if (a == 2)
            cout << triangle.rectangle_around_the_shape() << "\n";
    }
    else if (input == "круг")
    {
        cout << "введите радиус круга: ";
        cin >> a;
        cout << "введите номер цвета фигуры(1.Красный 2.Синий 3.Зелёный): ";
        cin >> color_number;
        cout << "введите центр фигуры(x и y): ";
        cin >> x >> y;
        Circle circle(a, x, y, color_number);
        cout << "Введите операцию с фигурой(1.площадь, 2.площадь прямоугольника описывающего фигуру): ";
        cin >> a;
        if (a == 1)
            cout << circle.area() << "\n";
        else if (a == 2)
            cout << circle.rectangle_around_the_shape() << "\n";
    }
    else if (input == "квадрат")
    {
        cout << "введите ребро квадрата: ";
        cin >> a;
        cout << "введите номер цвета фигуры(1.Красный 2.Синий 3.Зелёный): ";
        cin >> color_number;
        cout << "введите центр фигуры(x и y): ";
        cin >> x >> y;
        Square square(a, x, y, color_number);
        cout << "Введите операцию с фигурой(1.площадь, 2.площадь прямоугольника описывающего фигуру): ";
        cin >> a;
        if (a == 1)
            cout << square.area() << "\n";
        else if (a == 2)
            cout << square.rectangle_around_the_shape() << "\n";
    }
    else if (input == "прямоугольник")
    {
        double b;
        cout << "введите длинну прямоугольника: ";
        cin >> a;
        cout << "введите ширину прямоугольника: ";
        cin >> b;
        cout << "введите номер цвета фигуры(1.Красный 2.Синий 3.Зелёный): ";
        cin >> color_number;
        cout << "введите центр фигуры(x и y): ";
        cin >> x >> y;
        Rectangle rectangle(a, b, x, y, color_number);
        cout << "Введите операцию с фигурой(1.площадь, 2.площадь прямоугольника описывающего фигуру): ";
        cin >> a;
        if (a == 1)
            cout << rectangle.area() << "\n";
        else if (a == 2)
            cout << rectangle.rectangle_around_the_shape() << "\n";
    }
}