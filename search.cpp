/*  
    Search element k in sorted array

    Problem Satement
    Given a sorted array of integers and an element k, write a function which 
    returns the index on which k is present ,using recursion.

    return -1 if not present 
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int i,int k, int n, int k)
{   
    // when checked over entire array but element was not found
    if(i == n)
    {
        return -1;
    }

    // when element k is present at the current index : i
    if(a[i] == k)
    {
        return i;
    }

    return linearSearch(a, i+1,n, k);
}




int main()
{
    int a[] = {1,3,5,8,15,20};
    int k = 8;

    int n = sizeof(a) / sizeof(a[0]);

    int index = linearSearch(a,0,n,k);

    cout << "The element " << "is present at " << index <<endl;

    return 0;
}

