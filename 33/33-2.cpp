#include <iostream>
#include <vector>
#include <array>
#include <ctime>
#include <stdlib.h>

using namespace std;

array<int,2> spawn(vector<array<int,2>>& v)
{
  if (v.size() == 0) {
    cout << "no moves!\n";
    exit(1);
  }
  int index = rand() % v.size();
  array<int,2> temp = v[index];
  v.erase(v.begin() + index);
  return temp;
}

int main()
{
  srand(time(nullptr));
  const char FISH = 'f', BOOT = 'b', EMPTY = 'e';
  const int SIZE = 3, TOTAL_FISH = 3;
  int pond[SIZE][SIZE];
  vector<array<int,2>> moves;
  for (int i = 0; i < SIZE; i++)
    for (int j = 0; j < SIZE; j++)
      pond[j][i] = EMPTY, moves.push_back({j, i});
  
  array<int,2> fish = spawn(moves);
  pond [fish[0]] [fish[1]] = FISH;
  array<array<int,2>,TOTAL_FISH> boots;
  int x, y;
  for (int i = 0; i < TOTAL_FISH; i++) {
    boots[i] = spawn(moves);
    pond [boots[i][0]] [boots[i][1]] = BOOT;
  }
  cin >> x >> y;

  if (pond[x][y] == FISH) {
    cout << "you win!\n";
    exit(1);
  }
  if (pond[x][y] == BOOT) {
    cout << "you loze! this boot\n";
    exit(1);
  }
  if (pond[x][y] == EMPTY) {
    cout << "you didn't catch anything\n";
    exit(1);
  }
  cout << "incorrect input\n";
  return 1;
}
