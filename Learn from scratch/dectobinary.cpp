#include <iostream>
using namespace std;

void decToBinary(int n) {
    if (n == 0) {
        cout << 0;
    }

    // While loop to print binary
    while (n > 0) {
        cout << n % 2;  // Print remainder when divided by 2 (either 0 or 1)
        n = n / 2;      // Update n by dividing it by 2
    }
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;  // Take user input for the decimal number
    cout << "Binary: ";
    decToBinary(n);
    cout << endl;
    return 0;
}
