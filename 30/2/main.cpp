#include <iostream>
#include <string>
#include <vector>

#include <cpr/cpr.h>

using namespace std;

int main()
{
  cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"));
  cout << r.text << "\n";
}
