#include <iostream>
using namespace std;

int calcFactorial(int num) {
  int factorial = 1;
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  system("CLS");

  int n;
  cout << "n : ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int r = 0; r <= i; r++) {
      cout << calcFactorial(i) / (calcFactorial(r) * calcFactorial(i - r));
    }
    cout << endl;
  }

  return 0;
}