#include<bits/stdc++.h>
using namespace std;

int findElement(int a[],int n)
{
    unordered_map<int, int> m;

    // creating the hashmap for the given array
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    
    for (int i = 0; i < n ; i++)
    {
        {
            return a[i]; 
        }
        
    }
    return -1;
}

int main()
{
    int a[5] = {1,2,2,4,5};

    int n = sizeof(a) / sizeof(a[0]);

    cout << findElement(a, n);
}