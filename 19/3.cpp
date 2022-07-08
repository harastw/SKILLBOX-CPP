#include <fstream>
#include <iostream>
#include <vector>
#include <string>
int main()
{
    int counter = 0, maximumNumberIndex;
    float sum = 0, max = 0;
    std::vector<float> money;
    std::vector<std::string> names;
    std::string newData;
    std::ifstream statement;

    statement.open("/home/ai/code/SKILLBOX/19/words.txt");

    for (int i = 0; !statement.eof();)
    {
        statement >> newData;
        if (counter == 0)
        {
            names.push_back(newData);
            names[i] += " ";
            statement >> newData;
            names[i] += newData;
        }
        else if (counter == 1)
        {
            money.push_back(std::stoi(newData));
            sum += money[i];
            if (money[i] > max)
            {
                max = money[i];
                maximumNumberIndex = i;
            }
            i++;
        }

        if (counter != 2) counter++;
        else counter = 0; 
    }
    std::cout << "sum is: " << sum << "\n";
    std::cout << names[maximumNumberIndex] << " has the most money\n";
    
    statement.close();
    exit(EXIT_SUCCESS);
}