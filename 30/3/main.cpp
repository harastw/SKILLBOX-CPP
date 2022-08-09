#include <iostream>
#include <string>
#include <map>

#include <cpr/cpr.h>

using namespace std;

int main()
{
  map<string, string> args;
  string value, arg;
  cpr::Response r;
  while (true)
  {
    cout << "enter new argument: ";
    cin >> arg;
    if (arg == "post")
    {
      r = cpr::Post(cpr::Url("http://httpbin.org/post"),
  		    cpr::Payload({{"arg", arg.c_str()},
				  {"value", value.c_str()}}));
      cout << r.text << "\n";
      args.clear();
    }
    else if (arg == "get")
    {
      r = cpr::Get(cpr::Url("http://httpbin.org/get"));
      cout << r.text << "\n";
    }
    else if (arg == "exit")
      break;
    else
    {
      cout << "enter argument\'s value: ";
      cin >> value;
      args[arg] = value;
    }
  }
}
