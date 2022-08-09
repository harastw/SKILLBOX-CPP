#include <iostream>
#include <string>

#include <cpr/cpr.h>

using namespace std;

int main()
{
  while(true)
  {
  string input;
  cpr::Response r;
  cout << "enter command: ";
  cin >> input;
  if (input == "get")
    r = cpr::Get(cpr::Url("http://httpbin.org/get"));
  else if (input == "post")
  {
      string name, city;
      cin >> name >> city;
      r = cpr::Post(cpr::Url("http://httpbin.org/post"),
		    cpr::Payload({{"name", name.c_str()},
				  {"city", city.c_str()}}));
  }
  else if (input == "put")
  {
      r = cpr::Put(cpr::Url("http://httpbin.org/put"));
  }
  else if (input == "delete")
  {
      r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
  }
  else if (input == "patch")
  {
      r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
  }
  else if (input == "exit")
    break;
  else
    continue;
  std::cout << r.text << "\n";
  }
}
