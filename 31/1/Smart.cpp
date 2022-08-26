#include "Toy.cpp"
class Smart
{
private:
  Toy* obj;
  int l = 0;
public:
  Smart()
  {
    l++;
    obj = new Toy("toy");
  }
  Smart(std::string name)
  {
    obj = new Toy(name);
  }
  Smart(const Smart& oth)
  {
    obj = new Toy(*oth.obj);
  }
  Smart& operator=(const Smart& oth)
  {
    if (this == &oth)
      return *this;
    if (obj != nullptr)
      delete obj;
    obj = new Toy(*oth.obj);
    return *this;
  }
  ~Smart()
  {
    if (l != 0)
      l--;
    delete obj;
  }
  void NewLink()
  {
    l++;
  }
  void PrintTotalLink()
  {
    std::cout << l << std::endl;
  }
};
