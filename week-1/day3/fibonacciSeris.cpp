#include <iostream>
using namespace std;

int calcFibonnaci(int num) {
  int t1 = 0, t2 = 1, nextItem;
  for (int i = 1; i <= num; i++) {
    cout << t1 << endl;
    nextItem = t1 + t2;
    t1 = t2;
    t2 = nextItem;
  }
  return 0;
};

int main() {
  system("CLS");

  int num;
  cout << "num : ";
  cin >> num;
  calcFibonnaci(num);

  return 0;
}