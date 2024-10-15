#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    // First part: Upper pyramid
    for (int i = 0; i < num; i++) {
        // Print leading spaces
        for (int j = 0; j < num - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Second part: Inverted pyramid
    for (int i = 1; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*

Enter the Number: 5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
