#include <iostream>
using namespace std;

// function to check if the num is prime or not and returing respective boolean
// value
bool isPrime(int num) {
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  system("CLS");

  int a, b;
  cout << "range : ";
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      cout << i << endl;
    }
  }

  return 0;
}