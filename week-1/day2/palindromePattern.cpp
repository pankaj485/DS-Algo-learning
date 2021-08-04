#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int rows;
  cout << "rows :";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {

    // determining gap
    for (int j = 1; j <= rows - i; j++) {
      cout << " ";
    }
    // determining first palindrome set
    for (int k = i; k >= 1; k--) {
      cout << k;
    }
    // determining second palindrome set
    for (int l = 2; l <= i; l++) {
      cout << l;
    }
    // line break afer each row iteration
    cout << endl;
  }

  return 0;
}