#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3] = {{3,1,2},{3,2,3},{4,5,6}};

    cout << "The principal diagonal elements are: ";

    for(int i = 0;i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                cout << a[i][j] << "  ";
            }
        }
    }
    cout << "The secondary diagonal elements are: " << "  ";

    int k = 2;

    for(int i = 0;i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][k] << "  ";
            k--;
        }
    }
}









