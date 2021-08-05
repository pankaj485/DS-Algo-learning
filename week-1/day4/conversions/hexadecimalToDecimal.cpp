#include <bits/stdc++.h>
using namespace std;

int hexadecimalTodecimal(string n) {
  int sum = 0;
  int x = 1;
  int s = n.size();

  // traversing the letter from last to first by help of size of n
  for (int i = s - 1; i >= 0; i--) {
    if (n[i] > '0' && n[i] < '9') {
      // i didn't really get why we are dong -'0' except of that all are same to
      // bianaryToDecimal
      sum += x * (n[i] - '0');
    } else if (n[i] >= 'A' && n[i] <= 'F') {
      // converting letters into nums form
      sum += x * (n[i] - 'A' + 10);
    }
    x *= 16;
  }
  return sum;
}

int main() {
  system("CLS");
  string num;
  cout << "hexadecimal : ";
  cin >> num;

  cout << "decimal : " << hexadecimalTodecimal(num) << endl;

  return 0;
}