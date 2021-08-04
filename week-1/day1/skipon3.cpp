#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int number;
  number = 100;

  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      continue;
    }
    cout << i << "  ,  ";
  }
}