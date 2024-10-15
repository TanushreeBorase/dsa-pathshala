#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    // First part: Upper pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Second part: Inverted pyramid
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*

Enter the Number: 5
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

  */
