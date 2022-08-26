#include "ListGraph.cpp"
class MatrixGraph: public IGraph
{
public:
  int index = 0;
  std::vector<int> plan;
  std::vector<std::vector<bool>> v;
  MatrixGraph()
  {
    std::vector<bool> temp;
    temp.push_back(false);
    v.push_back(temp);
  }
  void AddArc(int from)
  {
    plan.push_back(from);
    std::vector<bool> temp;

    for (int i = 0; i < v.size(); i++)
    {
      if (i == from)
	temp.push_back(true);
      else
	temp.push_back(false);
    }
    v.push_back(temp);
    
    for (int i = 0; i < v.size(); i++)
    {
      if (i == from)
	v[i].push_back(true);
      else
	v[i].push_back(false);
    }
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
