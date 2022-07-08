#include <fstream>
#include <string>
#include <iostream>
using namespace std;

struct Record
{
private:
    int counter = 1;

    int wordCount(string s, int& counter)
    {
        for (int i = 0; i < s.size(); i++)
            if (s[i] == ' ')
                counter++;
        return counter;
    }

    bool checkWordCount(string s, int& counter)
    {
        bool check = wordCount(s, counter) == 4;
        return check;
    }

public:
    bool check(string s)
    {
        int i = 0, amountDot = 0;
        bool dot = false;

        if (!checkWordCount(s, counter))
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
            if (!isdigit(s[i]) && s[i] != '.')
                return false;
            
        i++;
        for (; s[i] != 0; i++)
            if (!isdigit(s[i]))
                return false;
        
        for (int j = 0; j <= i; j++)
        {
            if (!dot && s[j] == '.')
            {
                dot = true;
                amountDot++;
            }
            else if (dot && s[j] == '.')
                return false;
            else if (dot && s[j] != '.')
                dot = false;
        }
        if (amountDot != 2)
            return false;

        return true;
    }
};

int main()
{
    const char *PATH = "words.txt";
    Record record;
    string input, operation;
    cout << "enter operation: ";
    cin >> operation;
    if (operation == "add")
    {
        cin.ignore();
        getline(cin, input);
        ofstream statement;
        statement.open(PATH, ios::app);
        if (!statement.is_open())
            statement.open(PATH);

        if (!record.check(input))
        {
            cout << "Incorrect input\n";
            exit(EXIT_SUCCESS);
        }

        statement << input;
        statement << "\n\n";
        statement.close();

        exit(EXIT_SUCCESS);

    }
    else if (operation == "list")
    {
        ifstream statement(PATH);
        if (!statement.is_open())
        {
            cout << "no file!\n";
            statement.close();
            exit(EXIT_SUCCESS);
        }
        while (!statement.eof())
        {
            string output;
            getline(statement, output);
            cout << output << endl;
        }
        statement.close();
    }
}