#include <iostream>
using namespace std;

int main() {
  system("CLS");

  // rules :
  // 1rs = 1 chocolate
  // 3 wrappers = 1 chocolate
  // find out how much one can get

  int amount, wrapper, chocolates;
  cout << "amount : ";
  cin >> amount;
  //   amount = 15;
  wrapper = amount;
  chocolates = amount;

  while (wrapper >= 3) {
    int newChocolates;
    newChocolates = wrapper / 3;
    chocolates += newChocolates;
    wrapper = newChocolates + (wrapper % 3);
  }
  cout << chocolates;
  return 0;
}

// i'm really proud of myself that i cracked the solution for it myself