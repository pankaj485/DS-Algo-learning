#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int row, col;
  cout << "row : ";
  cin >> row;
  cout << "col : ";
  cin >> col;

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      // determining * position for cols for each rows i.e to each outline
      if ((i == 1 || i == row) || (j == 1 || j == col)) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    // ending line after a row
    cout << endl;
  }

  return 0;
}

/*

loigc :
--we have to print star on all cols from 1st and last rows
--we have to print star on all the cols from start and end having rows first or
last


*/