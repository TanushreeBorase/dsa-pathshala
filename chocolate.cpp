/*
                        MAGACIAN AND CHOCOLATES 
Problem statement:

Given N bags, each bag contains Bi chocolates.There is a kid and a magacian.
In one unit of time ,kid chooses a random bag i, eats Bi chocolates, then
the magacian fills the ith bag with floor (Bi/2) chocolates.

Find the maximum number of chocolates that kid can eat in A units of time.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[]= {1,5,7,80}
    int a = 2;

    int profit = 0;

    priority_queue<int> max_heap;

    for(auto i: b)
    {
        max_heap.push(i);
    }

    int curr = -1;

    while(a!=0)
    {
        profit += max_heap.top();
        profit += curr;
        max_heap.pop();
        max_heap.push(curr/2);
        
        a--;
    }

    cout << " The maximum number of chocolates " << chocolates << endl;

    return 0; 
}
