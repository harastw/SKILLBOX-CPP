#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int enterNum() {
  while (true) {
    string num;
    cout << "enter number of product: ";
    cin >> num;
    if (all_of(num.begin(), num.end(), ::isdigit))
      if (stoi(num) > 0)
	return stoi(num);
    cout << "incorrect number!\n";
  }
}

string enterActualVendor(map<string, int> m) {
  while (true) {
    string temp;
    cout << "enter vendor: ";
    cin >> temp;
    if (m.find(temp) != m.end())
      return temp;
    cout << "incorrect vendor!\n";
  }
}

void display(map<string, int> m) {
  for (auto& item : m)
    cout << "\t" << item.first << ":" << item.second << "\n";
}

int main() {
  map<string, int> store, client;
  string input;

  while (true) { // init store
    string vendor;
    int num;
    cout << "enter vendor code: ";
    cin >> vendor;
    store[vendor] = enterNum(); // add

    cout << "continue filling out? (yes/no): ";
    cin >> input;
    if (input == "no") break;
    else if (input == "yes") continue;
    cout << "incorrect input\n";
  }
  
  for (auto& item : store) // init shopping cart
    client[item.first] = 0;

  string s;
  int n;
  while (true) { // main logic
    cout << "\t\tstore\n";
    display(store);
    cout << "\t\tclient\n";
    display(client);
    
    cout << "enter command: ";
    cin >> input;
    if (input == "add") { // add
      s = enterActualVendor(client);
      n = enterNum();
      client[s] += n;
      store[s] -= n;
      if (store[s] <= 0) {
	cout << "no store[s], we need help!\n";
	store[s] = 1000;
      }
    }
    else if (input == "remove") { // remove
      s = enterActualVendor(client);
      n = enterNum();
      if ((client[s] - n) < 0) {
	cout << "Not enough items in the cart. Operation aborted\n";
	continue;
      }
      client[s] -= n;
      store[s] += n;
    }
    if (input == "exit")
      break;
  }
}
