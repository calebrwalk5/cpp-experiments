#include <iostream>
#include <string>
using namespace std;

// Arrays in C++

int main() {
	string specs[] = {"6GB DDR2", "Core 2 Duo", "AMD Radeon HD 7450", "500 Watt PSU", "Debian 10"};
	int i = 0;
	for (i = 0; i < 5; i++) {
		cout << specs[i];
		cout << " ";
	}
	cout << "\n";
	return 0;
}
