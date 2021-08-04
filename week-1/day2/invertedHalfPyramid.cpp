#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int rows, i = 1;
  cout << "rows : ";
  cin >> rows;

  //   alternative method
  /*
    while (i <= rows) {
      for (int j = 1; j <= rows; j++) {
        cout << " * ";
      }
      rows--;
      cout << endl;
    }
   */

  for (int j = rows; j >= 1; j--) {
    // determining * position on each row
    for (int k = 1; k <= j; k++) {
      cout << " * ";
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}