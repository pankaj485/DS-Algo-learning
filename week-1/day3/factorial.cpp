#include <iostream>
using namespace std;

int calcFibonacci(int n) {

  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  return factorial;
}

int main() {
  system("CLS");

  int num;
  cout << "num : ";
  cin >> num;

  cout << calcFibonacci(num);

  return 0;
}