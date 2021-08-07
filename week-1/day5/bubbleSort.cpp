#include <iostream>
using namespace std;

int main() {
  system("CLS");

  //   in bubble sort we reapetedly swap two adjacent elements if they are in
  //   wrong order

  int size;
  cout << "size : ";
  cin >> size;

  int array[size];

  cout << "values : \n";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  // we will compare the value of indexes from 0 to n-1 (i.e max index value)
  //   repeatedly swap two adjacent elements if they are in wrong order
  int counter = 1;
  //   we will compare till max index value , value is -1 after each iteration
  //   because position of largest value is fixed
  while (counter < size) {
    //   providing counter from index 0 to max index
    // counter max value is  size-2 because
    for (int i = 0; i < size - counter; i++) {
      // comapring index value with next one and swapping if it's larger than it
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
    counter++;
  }

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  return 0;
}