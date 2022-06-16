#include <vector>
#include <iostream>
int main()
{
    std::vector<int> costs = {23, 32, -2, 43, 46}, purchases = {0, 0, 0, 1, 3, 4, 3, 0};
    int amountCost = 0;
    for (int i = 0; i < purchases.size(); i++) amountCost += costs[purchases[i]]; 
    std::cout << amountCost << std::endl;
}