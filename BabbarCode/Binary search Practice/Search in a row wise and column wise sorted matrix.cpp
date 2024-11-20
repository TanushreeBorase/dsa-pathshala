// C++ program to search an element in row-wise
// and column-wise sorted matrix
#include <bits/stdc++.h>
using namespace std;

/* Searches the element x in mat[][]. If the
element is found, then prints its position
and returns true, otherwise prints "not found"
and returns false */
int search(int mat[4][4], int n, int x)
{
    if (n == 0)
        return -1;

    // set indexes for top right element
    int i = 0, j = n - 1;
    while (i < n && j >= 0) {
        if (mat[i][j] == x) {
            cout << "Element found at (" << i << ", " << j << ")";
            return 1;
        }
        if (mat[i][j] > x)
            j--;

        // Check if mat[i][j] < x
        else
            i++;
    }

    cout << "Element not found";
    return 0;
}

// Driver code
int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };

    // Function call
    search(mat, 4, 29);

    return 0;
}


/*

Removing row or column in each comparison – O(N) Time and O(1) Space:
The idea is to remove a row or column in each comparison until an element is found. 
Start searching from the top-right corner of the matrix. There are 3 possible cases:


The given number is greater than the current number: This ensures that all the elements in the current row are smaller than the given number
as the pointer is already at the right-most elements and the row is sorted. Thus, the entire row gets eliminated and continues the search for the next row. 
The given number is smaller than the current number: This ensures that all the elements in the current column are greater than the given number. 
Thus, the entire column gets eliminated and continues the search for the previous column, i.e. the column on the immediate left.
The given number is equal to the current number: This will end the search.

*/
