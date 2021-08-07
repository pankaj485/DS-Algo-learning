#include <cmath>
#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int maxNUm = -9999999, size;

  cout << "size : ";
  cin >> size;
  int array[size];

  cout << "nums : ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  for (int i = 0; i < size; i++) {
    maxNUm = max(array[i], maxNUm);
    cout << maxNUm << " ";
  }

  return 0;
}

// we have to print the array elements in ascending number till n