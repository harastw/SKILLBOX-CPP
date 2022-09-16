#include <iostream>
#include <vector>
#include <memory>
#include <unordered_set>
#include <functional>
typedef std::unordered_set<int, std::hash<int>,
			   std::equal_to<int>> my_set;
int main()
{
  my_set s;
  std::vector<int> v = { 3, 3, 3, 2, 3, 2, 4, 2, 7, 5, 5, };
  [&s](std::vector<int> v) {
    for (auto el : v)
      s.insert(el);
  }(v);
  for (my_set::const_iterator it = s.begin(); it != s.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}


