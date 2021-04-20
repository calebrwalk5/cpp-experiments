#include <iostream>
using namespace std;

int main() {
  for (i = 0; i < 2; i++) {
    cout << "for " << i << "\n";
  }
  cout << "for loop complete\n";
  int x = 0;
  while (x < 2) {
    cout << "while " << x << "\n";
    x++;
  }
  cout << "while loop complete\n";
  return 0;
}
