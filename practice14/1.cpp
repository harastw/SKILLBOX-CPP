#include <iostream>
int main()
{
    int cutlery = 3, plates = 2, chairs = 1, cutleryVIP = 4, platesVIP = 3;
    int company[12][3] = 
    {
                    {cutlery, plates, chairs}, {cutlery, plates, chairs}, {cutlery, plates, chairs}, {cutlery, plates, chairs}, {cutlery, plates, chairs},
        {cutleryVIP, platesVIP, chairs},
        {cutleryVIP, platesVIP, chairs},
                    {cutlery, plates, chairs}, {cutlery, plates, chairs}, {cutlery, plates, chairs}, {cutlery, plates, chairs}, {cutlery, plates, chairs}
    };
    company[5][3] += 1, company[6][1] -= 1, company[6][2] -= 1, company[10][1] = company[10][1] + 1 - 1;
}