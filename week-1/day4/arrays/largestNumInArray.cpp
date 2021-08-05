#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int size;
  cout << "size : ";
  cin >> size;

  int array[size];

  cout << "\nvalues : ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  int max = array[0];
  int min = array[0];

  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }

  // alternative way
  //   for (int i = 0; i < size; i++) {
  //     max = max(max, array[i]);
  //     min = min(min, array[i]);
  //   }

  cout << "\nmax : " << max << endl;
  cout << "\nmin : " << min << endl;
  return 0;
}