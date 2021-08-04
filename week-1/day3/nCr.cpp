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

  int n, r;
  cout << "n : ";
  cin >> n;
  cout << "\nr : ";
  cin >> r;

  // nCr = n!/(n-r)! * r!

  int nFact = calcFactorial(n);
  int rFact = calcFactorial(r);
  int nMinusrFact = calcFactorial(n - r);
  int nCr = nFact / (nMinusrFact * rFact);

  cout << n << "C" << r << " :" << nCr << endl;

  return 0;
}