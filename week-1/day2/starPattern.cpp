#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int num;
  cout << "num : ";
  cin >> num;

  for (int i = 1; i <= num; i++) {
    // determining gaps
    for (int g = 1; g <= num - i; g++) {
      cout << "   ";
    }
    // determining the column position in row
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << " * ";
    }
    cout << endl;
  }

  for (int i = num; i >= 1; i--) {
    // determining gaps
    for (int g = 1; g <= num - i; g++) {
      cout << "   ";
    }
    // determining the column position in row
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << " * ";
    }
    // line break after completion on a row
    cout << endl;
  }

  return 0;
}