#include<bits/stdc++.h>
using namespace std;

void printArray(int a[],int size, int i)
{
    // base condition
    if(i == size)
    {
        return;
    }

    // task
    cout << a[i] << " ";

    // recursive call
    printArray(a, size, i + 1)
        
}

int main()
{
    int a[] = {1,4,6,7,8}

    // number of elements present in the array
    int n = sizeof(a)/sizeof(a[0]);

    cout << "The elements of array are " << endl;
    printArray(a, n,0);

}