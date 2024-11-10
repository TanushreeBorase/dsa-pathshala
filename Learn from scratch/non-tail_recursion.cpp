#include <iostream>
using namespace std;

int nonTailRecursion(int n) {
    if (n > 0) {
        return n + nonTailRecursion(n - 1); // Recursive call is not the last operation
    } else {
        return 0;
    }
}

int main() {
    int result = nonTailRecursion(20);
    cout << "Result: " << result << endl;
    return 0;
}
