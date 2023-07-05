#include<bits/stdc++.h>
using namespace std;


void printRecursuive(int current, int n)
{
    // base condition
    if(current == n + 1)
    {
        return;
    }

    // task
    cout << current << " ";

    // recursion call
    printInc(current + 1);
}


int main()
{
    int n = 5;

    int current = 1;

    printInc (current, n);

}