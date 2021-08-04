#include <cmath>
#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int num, range;
  bool isPrime = true;
  bool flag = 0;
  cout << "num : ";
  cin >> num;
  range = sqrt(num);

  for (int i = 2; i <= range; i++) {
    if (num % i == 0) {
      cout << "not prime \n";
      isPrime = false;
      break;
    }
    if (isPrime) {
      cout << "prime \n";
      break;
    }
  }

  /*
   // checking prime number till n
    for (int i = 1; i <= num; i++) {

      for (int j = 2; j <= num - 1; j++) {
        if (i % j == 0) {
          cout << i << " is not a prime number \n";
          break;
        } else {
          cout << i << " is a prime number \n";
          break;
        }
        cout << j << endl;
      }
    }
   */

  return 0;
}