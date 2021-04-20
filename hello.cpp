#include <iostream>
using namespace std;

// my first C++ program 

int main() {
    cout << "Hello, World! I am learning C++ coming from C\n";
    loop();
    return 0;
}

int loop() {
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
}
