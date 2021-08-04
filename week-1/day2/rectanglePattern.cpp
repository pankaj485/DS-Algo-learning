#include <iostream>
using namespace std;

int main() {

  system("CLS");

  int rows, cols;
  cout << "rows : ";
  cin >> rows;
  cout << "cols : ";
  cin >> cols;

  for (int i = 1; i <= rows; i++) {
    // cout << "  row" << i << "=>";
    // determining col positions for each row
    for (int j = 1; j <= cols; j++) {
      cout << " * ";
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}