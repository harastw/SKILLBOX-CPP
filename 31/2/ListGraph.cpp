#include "IGraph.cpp"

class ListGraph: public IGraph
{
private:
  std::vector<std::vector<int>> v;
public:
  ListGraph()
  {
    std::vector<int> temp;
    temp.push_back(0);
    v.push_back(temp);
  }
  void AddArc(int from)
  {
    plan.push_back(from);
    std::vector<int> temp;
    index++;
    temp.push_back(index);
    v.push_back(temp);
    v[from].push_back(index);
  }
  
  void print()
  {
    for (int i = 0; i < v.size(); i++)
    {
      for (int j = 0; j < v[i].size(); j++)
	std::cout << v[i][j] << " ";
      std::cout << "\n";
    }
    std::cout << "\n";
  }
};
