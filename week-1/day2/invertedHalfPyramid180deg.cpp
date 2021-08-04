#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int rows;

  cout << "rows : ";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows; j++) {
      // determining gap
      if (j <= rows - i) {
        cout << "   ";
      } else {
        // determining * position on row
        cout << " * ";
      }
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}