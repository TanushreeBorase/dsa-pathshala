#include<bits/stdc++.h>
using namespace std;


void printMin(int a[], int size, int i, int mn)
{
    // base condition
    if(i == size)
    {
        return mn;
    }

    // task
    mn = min(mn, a[i]);

    // recursive call
    return printMin(a,size, i+1, mn);
}


int main()
{
    int a[] = {1,-1,2,4,-6,9};

    int n = sizeof(a)/sizeof(a[0]);

    int mn = a[0];

    cout << "The minimum element in the array " << printMin(a,n,0, mn)<< endl;

}