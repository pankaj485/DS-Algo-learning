#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int num, reverse = 0;
  cout << "num : ";
  cin >> num;

  while (num > 0) {
    int lastDigit = num % 10;
    reverse = reverse * 10 + lastDigit;
    num = num / 10;
  }
  cout << reverse << endl;

  return 0;
}