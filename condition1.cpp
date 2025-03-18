#include <iostream>
using namespace std;

int main() {
  int doorCode = 1337;

  if (doorCode == 1337) {
    cout << "Correct code.\nThe door is now open.\n";
  } else {
    cout << "Wrong code.\nThe door remains closed.\n";
  }

  return 0;
}