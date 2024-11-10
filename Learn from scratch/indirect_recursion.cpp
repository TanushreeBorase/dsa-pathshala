#include <iostream>
using namespace std;

void indirectRecursionB(int n); // Forward declaration

void indirectRecursionA(int n) {
    if (n > 0) {
        cout << n << " ";
        indirectRecursionB(n - 1); // Function A calls Function B
    }
}

void indirectRecursionB(int n) {
    if (n > 1) {
        cout << n << " ";
        indirectRecursionA(n / 2); // Function B calls Function A
    }
}

int main() {
    indirectRecursionA(10);
    return 0;
}
