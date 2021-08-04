#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int row, col;

  cout << "num : ";
  cin >> row;

  for (int i = 1; i <= row; i++) {
    // determining cols numbers positions on each row
    for (int j = 1; j <= row + 1 - i; j++) {
      cout << " " << j;
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}