#include <fstream>
#include <string>
#include <iostream>

int wordCount(int& counter, std::string example)
{
    for (int i = 0; i < example.size(); i++)
        if (example[i] == ' ')
            counter++;
    std::cout << counter << std::endl;
    return counter;
}

bool check(int& counter, std::string s)
{
    int i = 0;
    bool dot = false;

    if (wordCount(counter, s) != 4)
        return false;
    
    for (; s[i] != ' '; i++)
        if (!(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'))
            return false;
    i++;
    for (; s[i] != ' '; i++)
        if (!(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'))
            return false;
    i++;
    for (; s[i] != ' '; i++)
        if (!isdigit(s[i]))
            return false;
    i++;
    for (; s[i] != 0; i++)
        if (!isdigit(s[i]) && s[i] != '.')
            return false;
    
    for (int i = 0; i < counter; i++)
    {
        if (!dot && s[i] == '.')
            dot = true;
        else if (dot && s[i] == '.')
            return false;
        else if (dot && s[i] != '.')
            dot = false;
    }

    return true;
}

int main()
{
    int amountWords = 1;
    std::string input;
    std::fstream statement("words.txt", std::ios::app);
    getline(std::cin, input);

    if (!check(amountWords, input))
    {
        std::cout << "Incorrect input\n";
        return 1;
    }

    statement << input;
    statement << "\n\n";
    statement.close();

    exit(EXIT_SUCCESS);
}