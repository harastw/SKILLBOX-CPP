#include <iostream>
#include <string>
using namespace std;

class Talent
{
protected:
  bool status;
public:
  virtual void set_status(bool status) = 0;
  virtual bool get_status() = 0;
  virtual ~Talent() = default;
};

class Swimming: public Talent
{
public:
  void set_status(bool status) override
  {
    this -> status = status;
  }
  bool get_status() override
  {
    return status;
  }
};
class Dancing: public Swimming {};
class Counting: public Swimming {};

class Animal
{
protected:
  string name;
  Dancing dancing;
  Swimming swimming;
  Counting counting;
public:
  virtual string voice() = 0;
  void set_name(string name)
  {
    this -> name = name;
  }
  void set_talents(bool b1, bool b2, bool b3)
  {
    dancing.set_status(b1);
    swimming.set_status(b2);
    counting.set_status(b3);
  }
  void show_talents()
  {
    if (dancing.get_status())
      cout << "It can \"Dance\"" << "\n";
    if (swimming.get_status())
      cout << "It can \"Swim\"" << "\n";
    if (counting.get_status())
      cout << "It can \"Count\"" << "\n";
  }
  virtual ~Animal() = default;
};

class Dog: public Animal
{
public:
  string voice() override
  {
    return "Woof!\n";
  }
};

class Cat: public Animal
{
public:
  string voice() override
  {
    return "Meow!\n";
  }
};

int main()
{
  Dog dog;
  dog.set_name("Steve"), dog.set_talents(true, true, false);
  dog.show_talents();
}
