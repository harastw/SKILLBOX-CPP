#include <ctime>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int width, height;
    cin >> width >> height;
    vector < vector <int> > picture(height, vector <int> (width));
    ofstream fout("pic.txt");
    
    srand(12);

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            picture[i][j] = rand() % 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            fout << picture[i][j] << " ";
        fout << endl;
    }
    fout.close();

    exit(EXIT_SUCCESS);
}