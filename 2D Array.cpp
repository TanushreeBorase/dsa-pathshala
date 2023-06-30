#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2},{2,5,7,8},{6,9,0,1}};
    cout << "The matrix elements are : ";

    //to iterate over the rows
    for (int i = 0; i < 5; i++)
    {
        // to iterate over the columns
        for(int j = 0; j < 4; j++)
        {
            // print the elements present at the i,j cell
            cout << a[i][j] << "  ";
        }
    }
    
    cout << endl;
}
