#include<iostream>
using namespace std;

int main()
{
    int i, j, l;  // Declaring integers i, j for loops and l for number of rows

    cout << "Enter the number of rows/columns: ";
    cin >> l;  // Taking the input for the number of rows/columns

    // The outer loop for the number of rows
    for (int i = 0; i < l; i++)
    {
        // The inner loop for the number of columns in each row
        for (int j = 0; j < l; j++)
        {
            cout << "*";
        }

        cout << endl;  // Printing a new line after each row has been printed
    }

    return 0;
}
