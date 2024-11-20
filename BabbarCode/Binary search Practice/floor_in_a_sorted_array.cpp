#include <bits/stdc++.h> 

int floorSearch(vector<int> & arr, int x, int N)
{
    int low = 0, high = N - 1;
    int ans = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] <= x) {
            ans = arr[mid]; 
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }
    return ans;
}
/*
Problem statement
You are given a sorted array ‘A’ and an integer ‘X’. Your task is to find and return the floor value of ‘X’ in the array.

The floor value of ‘X’ in array ‘A’ is the largest element in the array which is smaller than or equal to X.

Note: In case there is no floor value of ’X’ in the array ‘A’, return -1.

For example:

For the given arr[  ] = { 1, 2, 5, 7, 12, 14 }  and X = 10

The floor of 10 is 7 because 7 is the largest element in the array which is smaller than 10.
*/
