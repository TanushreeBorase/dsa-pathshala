#include<bits/stdc++.h>
using namespace std;


void printRecursuive(int n)
{
    // base condition
    if(n == 0)
    {
        return;
    }

    // task
    cout << n << " ";

    // recursive call
    printRecursuive(n - 1);
}


int main()
{
    int n = 7;

    int printRecursive(n);

}