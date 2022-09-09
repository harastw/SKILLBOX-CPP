#include <iostream>
#define SIZE 5
using namespace std;
template<class t>
t func(t a[SIZE]) {
  t sum = 0;
  for (int i = 0; i < SIZE; i++) {
    if (a[i] < 0) a[i] *= -1;
    sum += a[i];
  }
  return sum / SIZE;
}
int main() {
  int a[SIZE];
  for (int i = 0; i < SIZE; i++) {
    cout << "enter " << i << " value: ";
    cin >> a[i];
  }
  cout << "int example: " << func(a) << "\n";
}
