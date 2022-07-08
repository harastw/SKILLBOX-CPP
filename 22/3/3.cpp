#include <iostream>
#include <string>
#include <vector>

using namespace std;

const unsigned int TOTAL_LETTERS = 26;

struct Word
{
    vector<char> symbols;
    int letters[TOTAL_LETTERS];
    void init()
    {
        string input;
        cin >> input;
        for (int i = 0; i < input.size(); i++)
            symbols.push_back(input[i]);

        for (int i = 0; i < TOTAL_LETTERS; i++)
            letters[i] = 0;
        for (int i = 0; i < TOTAL_LETTERS; i++)
            letters[symbols[i] - 97]++;
    }
};

bool anagramCheck(Word w1, Word w2)
{
    for (int i = 0; i < TOTAL_LETTERS; i++)
        if (w1.letters[i] != w2.letters[i])
            return false;
    return true;
}

int main()
{
    Word word1, word2;
    word1.init();
    word2.init();
    if (!anagramCheck(word1, word2))
        cout << "this is no anagram\n";
    else
        cout << "this is anagram\n";
}