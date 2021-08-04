#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int row;
  cout << "row : ";
  cin >> row;

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i; j++) {
      // if row+col is divisibel by 2 then it gives 1 if not 0 for pattern
      if (((i + j) % 2) == 0) {
        cout << " 1 ";
      } else {
        cout << " 0 ";
      }
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}