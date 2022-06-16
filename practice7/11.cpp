#include <iostream>
int main()
{
  int n, mF, nF, nMinusMFactorial;
  bool checkPassed = 0;
  while (!checkPassed)
  {
        std::cout << "Сколько вывести строк треугольника Паскаля?\n";
        std::cin >> n;
        if (n < 0) std::cout << "Ожидалось положительное число\n";
        else checkPassed = 1;
  }

    for (int i = 1; i <= n; i++) // i - строчка; j - номер
    {   
        nF = 1;
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        std::cout << "1 ";

        for (int k = 1; k <= i - 1; k++) // n!
        {
            nF *= k;
        }
        
        for (int j = 1; j <= i - 2; j++)
        {
            mF = 1, nMinusMFactorial = 1;
            for (int k = 1; k <= j; k++) // m!
            {
                mF *= k;
            }
            for (int k = 1; k <= (i-1) - j; k++) // (m-n)!
            {
                nMinusMFactorial *= k;
            }

            if (j == 1 || j == i - 2) std::cout << i - 1;
            else std::cout <<
            nF/(mF*nMinusMFactorial);
            std::cout << " ";
        }
        if (i != 1) std::cout << "1\n";
        else std::cout << "\n";
    }
}
/*
         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
    1 5 10 10 5 1
   1 6 15 20 15 6 1
  1 7 21 35 35 21 7 1
 1 
*/
