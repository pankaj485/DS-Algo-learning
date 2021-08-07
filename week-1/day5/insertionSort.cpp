#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int size;
  cout << "size : ";
  cin >> size;
  int array[size];

  cout << "values : ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }
  cout << "values recorded : ";

  for (int i = 1; i < size; i++) {
    int current = array[i];
    int j = i - 1;
    while (array[j] > current && j >= 0) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = current;
  }
  // have to refer video for logic took me more than 3 hours on paper to
  // understand it don't forget to revise in 2 to 3 days xd

  for (int i = 0; i < size; i++) {
    cout << array[i] << ",";
  }

  return 0;
}