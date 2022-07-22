#include "branch.cpp"

#define TOTAL_TREES 5

using namespace std;

int main()
{
    string s;
    vector<vector<Branch>> trees[TOTAL_TREES];
    vector<vector<Branch>> new_tree;
    vector<Branch> new_big_branch;
    vector<int> neighbours[TOTAL_TREES];
    for (int i = 0; i < TOTAL_TREES; i++)
    {
        for (int j = 0; j < 3 + rand() % TOTAL_TREES; j++)
        {
            for (int k = 0; k < 2 + rand() % 3; k++)
            {
                Branch new_branch;
                new_branch.init();
                if (new_branch.get_name() != "None")
                    new_big_branch.push_back(new_branch);
            }
            new_tree.push_back(new_big_branch);
            neighbours[i].push_back(new_big_branch.size());
            new_big_branch.clear();
        }
        trees[i] = new_tree;
        new_tree.clear();
    }
    cout << "введите имя для поиска: ";
    cin >> s;
    for (int i = 0; i < TOTAL_TREES; i++)
        for (int j = 0; j < trees[i].size(); j++)
            for (int k = 0; k < trees[i][j].size(); k++)
                if (trees[i][j][k].get_name() == s)
                {
                    if (s == "None")
                        cout << "слово занято под команду\n";
                    else
                        cout << neighbours[i][j] << "\n";
                    exit(EXIT_SUCCESS);
                }
}