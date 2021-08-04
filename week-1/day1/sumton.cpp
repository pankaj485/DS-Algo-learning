#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int sum, number;
  sum = 0;
  cout << "Enter the value : ";
  cin >> number;

  for (int i = 1; i <= number; i++) {
    sum = sum + i;
    cout << " iteration " << i << " : " << sum << endl;
  }
  cout << "final sum : " << sum;

  return 0;
}