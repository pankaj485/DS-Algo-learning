#include <iostream>
using namespace std;

int main() {

  int a, b, c, largestNum;

  cout << "Enter the numbers \n ";
  cout << "first num \n";
  cin >> a;
  cout << "second num \n";
  cin >> b;
  cout << "third num \n";
  cin >> c;

  if (a > c) {
    if (a > b) {
      largestNum = a;
    } else {
      largestNum = b;
    }
  } else {
    if (c > b) {
      largestNum = c;
    } else {
      largestNum = b;
    }
  }
  cout << "largest number is : " << largestNum;
  return 0;
}
