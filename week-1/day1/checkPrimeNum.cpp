#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int startingNum, endNum, mainCounter, totalPrimeNums;

  cout << "enter starting number for range  : ";
  cin >> startingNum;
  cout << "enter ending number for range  : ";
  cin >> endNum;
  cout << "in the range of " << startingNum << " and " << endNum << endl;

  for (mainCounter = startingNum; mainCounter <= endNum; mainCounter++) {
    int i, num;
    num = mainCounter;
    for (i = 2; i < num; i++) {
      if (num % i == 0) {
        // cout << num << " is not prime. it is first divisible by : " << i
        //      << endl;
        break;
      }
    }

    if (i == num) {
      totalPrimeNums += 1;
      cout << num << " is prime \n ";
    }
  }
  cout << "total primeNums : " << totalPrimeNums;
  return 0;
}