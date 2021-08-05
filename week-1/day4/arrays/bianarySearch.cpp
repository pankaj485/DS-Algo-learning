#include <iostream>
using namespace std;

int bianarySearch(int arr[], int size, int number) {
  int start = 0;
  int end = size;

  while (start <= end) {
    int mid = (start + end) / 2;

    if (arr[mid] == number) {
      return mid;
    } else if (arr[mid] > number) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  system("CLS");

  int size, number;
  cout << "size : ";
  cin >> size;

  int array[size];

  cout << "numbers : ";
  for (int i = 0; i < size; i++) {
    //   note : number has to be sorted fot bianary search
    cin >> array[i];
  }

  cout << "number to find : ";
  cin >> number;

  int result = bianarySearch(array, size, number);
  //   cout << result;

  result > 1 ? cout << number << " found at index " << result
             : cout << number << " is not found in the list ";

  return 0;
}