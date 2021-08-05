#include <iostream>
using namespace std;

int findValue(int arr[], int size, int value) {
  for (int i = 0; i < size; i++) {
    if (value == arr[i]) {
      return i;
    }
  }
  return -1;
}

int main() {
  system("CLS");

  int size, value;
  cout << "size : ";
  cin >> size;
  int array[size];
  cout << "\nvalues : ";

  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  cout << "\nvalue to search : ";
  cin >> value;

  int result = findValue(array, size, value);
  result > 0 ? cout << value << " found at index " << result << endl
             : cout << "couldn't find the value ";
}