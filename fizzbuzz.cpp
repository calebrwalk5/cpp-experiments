#include <iostream>
using namespace std;

// FizzBuzz game in C++

int main() {
	int i = 1;
	for (i = 1; i < 100; i++) {
		if ((i % 15) == 0) {
			cout << "FizzBuzz\n";
		} else if ((i % 3) == 0) {
			cout << "Fizz\n";
		} else if ((i %5) == 0) {
			cout << "Buzz\n";
		} else {
			cout << i << "\n";
		}
	}
	return 0;
}
