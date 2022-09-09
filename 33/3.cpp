#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<class t1, class t2>
class My_Map
{
private:
  vector<t1> keys;
  vector<t2> values;
  
public:

  My_Map(t1 k, t2 v)
  {
    keys.push_back(k), values.push_back(v);
  }
  
  void add(t1 k, t2 v)
  {
    keys.push_back(k), values.push_back(v);
  }

  void remove(t1 k)
  {
    for (int i = 0; i < keys.size(); i++)
      if (keys[i] == k)
	keys.erase(keys.begin() + i), values.erase(values.begin() + i); 
  }

  void print()
  {
    for (int i = 0; i < keys.size(); i++)
      cout << "key " << i << ": " << keys[i] << "\tvalue: " << values[i] << "\n";
  }

  void find(t1 k)
  {
    for (int i = 0; i < keys.size(); i++)
      if (k == keys[i])
        cout << "key " << i << ": " << keys[i] << "\tvalue: " << values[i] << "\n";
  }
};

int main()
{
  My_Map m(0, 1);
  string input;
  int key;
  cin >> input;
  if (input == "add") {
    cout << "enter key: ";
    cin >> key;
    cout << "enter value: ";
    int v;
    cin >> v;
    m.add(key, v);
  } else if (input == "remove") {
    cout << "enter key: ";
    cin >> key;
    m.remove(key);
  } else if (input == "print") {
    m.print();
  } else if (input == "find") {
    cout << "enter key: ";
    cin >> key;
    m.find(key);
  } else {
    cout << "incorrect input\n";
  }
}
