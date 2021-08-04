#include <iostream>
using namespace std;

int main() {

  system("CLS");

  int rows;

  cout << "rows : ";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    // printing numbers in col acc to row number
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}