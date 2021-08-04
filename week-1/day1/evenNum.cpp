#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "enter the number \n ";
  cin >> a;

  if (a % 2 == 0) {
    cout << a << " is even number \n ";
  } else {
    cout << a << " is odd number \n ";
  }
  return 0;
}