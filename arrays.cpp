#include <iostream>
#include <string>
using namespace std;

// Arrays in C++

int main() {
	string specs[] = {"6GB DDR2", "Core 2 Duo", "AMD Radeon HD 7450", "500 Watt PSU", "Debian 10"};
	string gamingpc[] = {"16GB DDR4", "Ryzen 5 @4.20 GHz", "GTX 980Ti 2x SLI", "750 Watt PSU", "Dual-boot Arch and Windows 10"};
	int i = 0;
	for (i = 0; i < 5; i++) {
		cout << specs[i];
		cout << ", ";
	}
	cout << "\n";
	int x = 0;
	for (x = 0; x < 5; x++) {
		cout << gamingpc[x];
		cout << ", ";
	}
	cout << "\n";
	return 0;
}
