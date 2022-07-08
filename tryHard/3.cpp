#include <iostream>
#include <string>

using namespace std;

struct Vector
{
private:
    int size = 0;
    float* v = NULL;
public:
    int enterSize()
    {
        cout << "enter start size: ";
        cin >> size;
        return size;
    }

    int getSize()
    {
        return size;
    }

    int getElement(int index)
    {
        return *(v + index);
    }

    void initV()
    {
        size = enterSize();
        v = (float*)malloc( sizeof(float) * size );
        for (int i = 0; i < size; i++)
        {
            cout << "enter " << i << " element: ";
            cin >> *(v + i);
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
            cout << i << " element is: " << *(v + i) << endl;
    }

    void clean()
    {
        free(v);
    }

    void add(Vector v2)
    {
        if (size != v2.getSize())
            cout << "vector sizes must be equal\n";
        else
            for (int i = 0; i < size; i++)
                *(v + i) += v2.getElement(i);
    }

    void subtract(Vector v2)
    {
        if (size != v2.getSize())
            cout << "vector sizes must be equal\n";
        else
            for (int i = 0; i < size; i++)
                *(v + i) -= v2.getElement(i);
    }

    void scale(float n)
    {
        for (int i = 0; i < size; i++)
            *(v + i) *= n;
    }

    int length()
    {
        return size;
    }

};

int main()
{
    float number = 2;
    Vector myVector;
    myVector.initV();

    Vector myVector2;
    myVector2.initV();

    myVector.add(myVector2);
    myVector.subtract(myVector2);
    myVector.scale(number);
    myVector.display();

    myVector.clean();
    myVector2.clean();
}