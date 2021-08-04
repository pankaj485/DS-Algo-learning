#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int firstNum, secondNum, resultValue;
  char mathematicalOperation;

  cout << "enter first num : ";
  cin >> firstNum;

  cout << "enter operation : ";
  cin >> mathematicalOperation;

  cout << "enter second num : ";
  cin >> secondNum;

  switch (mathematicalOperation) {
  case '+':
    resultValue = firstNum + secondNum;
    break;

  case '-':
    resultValue = firstNum - secondNum;
    break;

  case '*':
    resultValue = firstNum * secondNum;
    break;

  case '/':
    resultValue = firstNum / secondNum;
    break;

  default:
    cout << " something went wrong ! try again \n ";
    break;
  }

  cout << "output : " << resultValue << endl;

  return 0;
}