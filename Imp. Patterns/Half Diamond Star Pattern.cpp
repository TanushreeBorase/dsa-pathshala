#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no: ";
    cin >> n;

    // First part: Print increasing pattern of stars
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to the next line after each row
    }

    // Second part: Print decreasing pattern of stars
    for (int i = n-1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

/*

Enter no: 5
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
