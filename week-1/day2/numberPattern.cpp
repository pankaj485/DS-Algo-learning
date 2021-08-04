#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int rows;
  cout << "rows : ";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    int gap = rows - i;
    // determining gap
    for (int j = 1; j <= gap; j++) {
      cout << " ";
    }
    // determining numbers to print
    for (int k = 1; k <= i; k++) {
      cout << k << " ";
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}