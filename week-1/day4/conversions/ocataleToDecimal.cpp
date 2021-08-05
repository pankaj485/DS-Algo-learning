#include <iostream>
using namespace std;

int ocataleToDecimal(int n) {
  int sum = 0;
  int x = 1;
  while (n > 0) {
    int y = n % 10;
    sum += x * y;
    x *= 8;
    n = n / 10;
  }
  return sum;
}

int main() {
  system("CLS");

  int num;
  cout << "octale num : ";
  cin >> num;
  // all the logics are same as bianaryToDecimal but here x(base) is different
  cout << "Decimal : " << ocataleToDecimal(num) << endl;

  return 0;
}