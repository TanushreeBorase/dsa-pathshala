/*
Problem Statement:
Given an array, representing no. of vacant seats in each row of a stadium. You need to sell tickets to B people.

Each seat costs equal to the number of vacant seats in the row it belongs to.
The task is to maximize the profit by selling the tickets to B people.
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,3,7,9};
    int b = 2;

    priority_queue<int> max_heap;

    for(auto val : a)
    {
        max_heap.push(val);
    }

    int sum = 0;
    while(b != 0)
    {
        // max element present among currently present elements
        sum += max_heap.top();

        max_heap.pop();

        b--;
    }

        
