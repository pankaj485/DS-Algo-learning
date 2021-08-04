#include <cmath>
#include <iostream>
using namespace std;

int check(int x, int y, int z) {
  int a, b, c;
  a = max(x, max(y, z));

  if (a == x) {
    b = y;
    c = z;
  } else if (a == y) {
    b = x;
    c = z;
  } else {
    b = x;
    c = y;
  }
  if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
    return true;
  } else {
    return false;
  }
}

int main() {
  system("CLS");

  int x, y, z;
  cin >> x >> y >> z;

  if (check(x, y, z)) {
    cout << "tirplet \n ";
  } else {
    cout << "not triplet \n";
  }

  return 0;
}