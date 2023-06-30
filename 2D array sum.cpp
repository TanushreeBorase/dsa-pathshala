#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[2][2] = {{1,2},{2,3}};
    int b[2][2] = {{2,3},{4,5}};

    int sum[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "The matrix obtained by adding the two matrices: " << endl;

    // iterate over the rows of the sum matrix
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << sum[i][j] << "  ";
        }
    }