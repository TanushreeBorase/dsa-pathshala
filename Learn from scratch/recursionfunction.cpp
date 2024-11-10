/*
. Direct Recursion:
it can be done when the function calls itself
*/

#include <iostream>
using namespace std;

void directRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        directRecursion(n - 1); // Function calls itself
    }
}

int main() {
    directRecursion(10);
    return 0;
}
