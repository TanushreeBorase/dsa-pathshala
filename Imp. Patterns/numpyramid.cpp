#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = i; j >=1; j--) {
            cout << j;
        }

        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        for (int j = i; j >=1 ; j--) {
            cout << " ";
        }
        
        cout << endl;
    }

    return 0;
}

/*

Enter the Number: 5
    1
   212
  32123
 4321234
543212345

*/
