#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int lines;
  cout << "lines : ";
  cin >> lines;

  for (int i = 1; i <= lines; i++) {
    // first half logic
    for (int j = 1; j <= lines * 2; j++) {
      if ((j > lines * 2 - i) || (j <= i)) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << endl;
  }

  // second half logic
  for (int i = lines; i >= 1; i--) {
    for (int j = 1; j <= lines * 2; j++) {
      if ((j <= i) || (j > lines * 2 - i)) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    // line break afer each row iteration
    cout << endl;
  }
  return 0;
}

/*
took me more than 4 hours with this butterfly
but i did it by self xd
ps:their logic was more efficient xd
*/