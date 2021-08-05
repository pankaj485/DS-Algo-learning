#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int size;

  cout << "size : ";
  cin >> size;
  int array[size];

  cout << "numbers : ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  // we are comparing each index's value with other ones and after completing
  // one one full iteraion of comparasion of an index with rest of the index
  // then the index is supposed to be sorted
  for (int i = 0; i < size - 1; i++) {
    //   i is for main comparing index of an array starting with index 0 to <n-1
    for (int j = i + 1; j < size; j++) {
      //   j is for main compared index of an array starting with index i+1 to
      //   <n
      //   i.e for n=5 we will have i =0 to 3 and j=1 to 4 and each iteration is
      //   checked for j<i , if so values are swapped in the array acc to index

      if (array[j] < array[i]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  cout << "sorted array : ";
  for (int i = 0; i < size; i++) {
    cout << array[i];
  }

  return 0;
}