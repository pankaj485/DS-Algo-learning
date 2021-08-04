#include <iostream>
using namespace std;

int calcToN(int num) {
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  system("CLS");

  int n;
  cout << "num : ";
  cin >> n;

  cout << calcToN(n);

  return 0;
}