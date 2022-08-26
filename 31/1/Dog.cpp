#include "Smart.cpp"
#define DOG "dog"
#define TOY "toy"
#define AGE 0
class Dog
{
private:
  std::string name;
  int age;
  Smart s;
public:
  Dog(std::string _name, Smart& _s, int _age) : name(_name), s(_s)
  {
    _s.NewLink();
  }
  Dog(Smart& _s) : Dog(DOG, _s, AGE)
  {
    _s.NewLink();
  }
  Dog(std::string _name, Smart& _s) : Dog(_name, _s, AGE)
  {
    _s.NewLink();
  }
  Dog(int _age, Smart& _s) : Dog(DOG, _s, _age)
  {
    _s.NewLink();
  }
};
