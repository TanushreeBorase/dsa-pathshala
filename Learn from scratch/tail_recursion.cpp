#include <iostream>
using namespace std;

void tailRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        tailRecursion(n - 1); // Recursive call is the last operation
    }
}

int main() {
    tailRecursion(15);
    return 0;
}
