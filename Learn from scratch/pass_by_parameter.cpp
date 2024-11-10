#include <iostream>
using namespace std;

void modifyValue(int &num) {
    num += 10; // Modifies the original variable
    cout << "Inside function: " << num << endl;
}

int main() {
    int originalValue = 5;

    // Passing the variable by reference
    modifyValue(originalValue);

    cout << "Outside function: " << originalValue << endl;

    return 0;
}
