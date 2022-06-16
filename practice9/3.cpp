#include <iostream>
#include <string>
int main()
{
    std::string input;
    int amountWords = 0;
    bool wordStart = 0;
    std::getline(std::cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != ' ' && !wordStart) wordStart = 1; 
        else if (input[i] == ' ' && wordStart)
        {
            wordStart = 0;
            amountWords++;
        }
    }
    if (wordStart) amountWords++;
    std::cout << amountWords << "\n";
}