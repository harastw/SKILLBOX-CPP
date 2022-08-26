#include <iostream>
#include <vector>
struct IGraph
{
  virtual void AddArc(int from) = 0;
  int index = 0;
  std::vector<int> plan;
  void Copy(const IGraph& g)
  {
    for (int i = 0; i < g.plan.size(); i++)
        AddArc(g.plan[i]);
  }
};
