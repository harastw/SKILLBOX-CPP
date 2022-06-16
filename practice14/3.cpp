#include <iostream>
using namespace std;
void inputMatrix(const unsigned int SIZE_EXAMPLE, int matrixExample[4][4])
{
    for (int i = 0; i < SIZE_EXAMPLE; i++)
    {
        for (int j = 0; j < SIZE_EXAMPLE; j++)
        {
            cout << "enter " << i << " line, " << j << " element: ";
            cin >> matrixExample[i][j];
        }
    }
}
void display(const unsigned int SIZE_EXAMPLE, int matrixExample[4][4])
{
    for (int i = 0; i < SIZE_EXAMPLE; i++)
    {
        for (int j = 0; j < SIZE_EXAMPLE; j++)
        {
            cout << matrixExample[i][j] << "\t";
        }
        cout << "\n\n";
    }
}
bool equalityTest(const unsigned int SIZE_EXAMPLE, int matrixExample1[4][4], int matrixExample2[4][4])
{
    for (int i = 0; i < SIZE_EXAMPLE; i++)
    {
        for (int j = 0; j < SIZE_EXAMPLE; j++)
        {
            if (matrixExample1[i][j] != matrixExample2[i][j])
            {
                cout << "matrices are not equal!\n";
                return false;
            }
        }
    }
    cout << "matrices are equal!\n";
    return true;
}
void newMatrixOutput(const unsigned int SIZE_EXAMPLE, int matrixExample[4][4])
{
    for (int i = 0; i < SIZE_EXAMPLE; i++) for (int j = 0; j < SIZE_EXAMPLE; j++) if (j != i) matrixExample[i][j] = 0;
    cout << "\n\n";
    display(4, matrixExample);
}
int main()
{
    const unsigned int SIZE = 4;
    int matrixOne[SIZE][SIZE], matrixTwo[SIZE][SIZE];
    inputMatrix(SIZE, matrixOne);
    display(SIZE, matrixOne);
    inputMatrix(SIZE, matrixTwo);
    display(SIZE, matrixTwo);
    if (equalityTest(SIZE, matrixOne, matrixTwo)) newMatrixOutput(SIZE, matrixOne);
}