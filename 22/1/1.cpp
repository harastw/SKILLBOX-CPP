#include <map>
#include <iostream>
#include <string>

int main()
{
    std::string input, name, number;
    int type = 2;
    std::map<std::string, std::string> phonebook;
    bool end = false;

    while (!end)
    {
        std::cout << "введите 1.Имя для поиска номера 2.Номер для поиска имени 3.Номер и имя для добавления записи\n";
        getline(std::cin, input);

        int size = input.size();
        for (int i = 0; i < size; i++)
            if (input[i] == ' ')
            {
                std::cout << "Выбрано добавить новую запись\n";
                type = 1;
                break;
            }

        if (type != 1)
        {
            bool symbolCheck = false;
            for (int i = 0; i < size; i++)
            {
                symbolCheck = std::isalpha(input[i]);
                if (symbolCheck)
                {
                    std::cout << "Выбрано найти номер по имени\n";
                    type = 3;
                    break;
                }
            }
        }

        if (type == 2)
            std::cout << "Выбрано найти имя по номеру\n";
        
        if (type == 1)
        {
            int i = 0;
            for (; input[i] != ' '; i++)
                number.push_back(input[i]);

            i++;
            for (; i < size; i++)
                name.push_back(input[i]);

            phonebook.emplace(number, name);
            std::cout << phonebook[number] << " добавлен в справочник\n";
        }
        else if (type == 2)
        {
            for (int i = 0; i < size; i++)
                number.push_back(input[i]);

            std::cout << phonebook[number] << std::endl;
        }
        else
        {
            for (int i = 0; i < size; i++)
                name.push_back(input[i]);

            std::map <std::string, std::string> :: iterator it = phonebook.begin();
            for (int j = 0; it != phonebook.end(); it++, j++) 
            {
                if (it->second == name)
                    std::cout << it->first << std::endl;
            }
        }

        std::cout << "end? (1 - yes | 0 - no)\n";
        std::cin >> end;

        std::cin.ignore();
        name.clear();
        number.clear();
        type = 2;
    }
}