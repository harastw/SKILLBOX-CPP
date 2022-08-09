#include <iostream>
#include <string>

#include <cpr/cpr.h>

using namespace std;

int main()
{
  cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"));
  string str = r.text, new_str;
  for (int i = str.find("<h1>") + 1; i < str.find("</h1>"); i++)
  {
    new_str.push_back(str[i]);
  }
  cout << new_str << "\n";
}

