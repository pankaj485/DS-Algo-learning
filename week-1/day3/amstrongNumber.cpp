#include <iostream>
#include <math.h>
using namespace std;

int main() {
  system("CLS");

  int num, individualNumCube = 0, initialNum;
  cout << "num : ";
  cin >> num;
  initialNum = num;

  while (num > 0) {
    int lastDigit = num % 10;
    individualNumCube += pow(lastDigit, 3);
    num = num / 10;
  }

  if (initialNum == individualNumCube) {
    cout << initialNum << " is an amstrong number \n";
  } else {
    cout << initialNum << " is not an amstrong number \n";
  }
  return 0;
}