#include <iostream>
using namespace std;

int calcSubArraysCount(int size) { return (size * (size + 1)) / 2; }

int main() {
  system("CLS");

  int size;

  cout << "size :";
  cin >> size;
  int array[size];

  cout << "entries : ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  cout << "possible num of sub-Arrays : " << calcSubArraysCount(size) << endl;

  for (int i = 0; i < size; i++) {
    int sum = 0;
    cout << endl << "sum of sub-Array " << i << " : ";
    for (int j = i; j < size; j++) {
      // iterating over each index and getting sum of it with each index after
      sum += array[j];
      cout << sum << " , ";
    }
  }
  return 0;
}

// it was kinda easy , just have to know the concept of subarays