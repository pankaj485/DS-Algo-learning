#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int rows, count = 1;
  cout << "rows : ";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    // same logic i.e printing * on col for row num but instead printing number
    // insted of *
    for (int j = 1; j <= i; j++) {
      cout << count << " ";
      count++;
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}

/*
logic
--we are printing values acc to the rows that means we are prining onlly cols
each time the initialized global value will be incresed by 1 and it will be
printed intsted ot *
*/