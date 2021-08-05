#include <iostream>
using namespace std;

int bianaryToDecimal(int n) {
  int sum = 0;
  int x = 1;
  // x is num equivalent to 2^n for each digit
  // sum is the actual result to be returned

  //   we will do it untill the first letter
  while (n > 0) {
    // getting the last letter of the num to traverse and multiply with
    // respective 2^n
    int y = n % 10;
    // calculating result on each traversal
    sum += x * y;
    // calculating 2^n for next traversal
    x *= 2;
    // calculting the num for next traversal , last one is removed doing moudlo
    // and it will give 1 letter less
    n = n / 10;
  }
  return sum;
}

int main() {
  system("CLS");

  int num;
  //   basic input
  cout << "bianary num : ";
  cin >> num;
  // bianaryToDecimal(num) is num passed to the function for conversion
  cout << "\nDecimal : " << bianaryToDecimal(num) << endl;

  return 0;
}