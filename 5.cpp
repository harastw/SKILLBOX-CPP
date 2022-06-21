#include <fstream>
#include <string>
#include <vector>
#include <iostream>

const unsigned int AMOUNT_SECTION = 13;

void circle(int& drumPosition)
{
    while (drumPosition > AMOUNT_SECTION)
        drumPosition -= AMOUNT_SECTION;
}

int main()
{
    bool game = true, sectionStatus[AMOUNT_SECTION];
    for (int i = 0; i < AMOUNT_SECTION; i++)
        sectionStatus[i] = false;
    std::ifstream file;
    int rotation, spectatorPoints = 0, connoisseurPoints = 0, drumPosition = 1;
    std::vector<std::string> questionsPaths = {"questions/1", "questions/2", "questions/3", "questions/4", "questions/5",
    "questions/6", "questions/7", "questions/8", "questions/9", "questions/10", "questions/11", "questions/12", "questions/13"},
    answersPaths = {"answers/1", "answers/2", "answers/3", "answers/4", "answers/5",
    "answers/6", "answers/7", "answers/8", "answers/9", "answers/10", "answers/11", "answers/12", "answers/13"};
    std::string answer, word, text;

    while (game)
    {
        std::cout << "enter ofset: ";
        std::cin >> rotation;
        drumPosition += rotation;
        circle(drumPosition);
        while (sectionStatus[drumPosition - 1]) 
        {
            drumPosition++;
            circle(drumPosition);
        }
        sectionStatus[drumPosition - 1] = true;
        std::cout << "drum position " << drumPosition << "\n";

        file.open(questionsPaths[drumPosition - 1]); // QUESTION
        if (!file.is_open())
        {
            std::cout << "incorrect path!\n";
            return 0;
        }

        while (!file.eof())
        {
            file >> word;
            text += word + " ";
        }
        file.close();
        std::cout << text;
        text.clear();
        std::cin >> answer;
        
        file.open(answersPaths[drumPosition - 1]); // ANSWER
        while (!file.eof())
        {
            file >> word;
        }
        if (word == answer)
        {
            std::cout << "yes, +1 point for connoisseur\n";
            connoisseurPoints++;
        }
        else
        {
            std::cout << "no, +1 point for spectator\n";
            spectatorPoints++;
        }
        file.close();

        if (connoisseurPoints == 6)
        {
            std::cout << "connoisseur won\n";
            game = false;
        }
        else if (spectatorPoints == 6)
        {
            std::cout << "spectator won\n";
            game = false;
        }
    }

    exit(EXIT_SUCCESS);
}