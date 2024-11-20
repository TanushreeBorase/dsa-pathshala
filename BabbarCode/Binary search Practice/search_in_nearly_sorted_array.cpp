#include <iostream>
#include <vector>
using namespace std;

// An iterative binary search function.
// It returns the index of x in the given array
// arr[l..r] if present, otherwise -1
int binarySearch(const vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;

    while (r >= l) {
        int mid = l + (r - l) / 2;

        // Check the middle 3 positions
        if (arr[mid] == x) 
            return mid;
        if (mid > l && arr[mid - 1] == x) 
            return mid - 1;
        if (mid < r && arr[mid + 1] == x) 
            return mid + 1;

        // Search in left subarray
        if (arr[mid] > x) 
            r = mid - 2;
        // Search in right subarray
        else 
            l = mid + 2;
    }
    return -1; // Element not found
}

// Driver Code
int main() {
    vector<int> arr = { 3, 2, 10, 4, 40 };
    int x = 4;
    cout << binarySearch(arr, x);
    return 0;
}

/*
Given a sorted array arr[] of size n, some elements of array are moved to either of the adjacent positions,
i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. 
The task is to search for an element in this array.

Examples : 

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, x = 40
Output: 2 
Explanation: Output is index of 40 in given array i.e. 2

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, x = 90
Output: -1
Explanation: -1 is returned to indicate the element is not present


Using Binary Search – O(Log n) Time and O(1) Space
The idea is to compare the key with middle 3 elements, if present then return the index. 
If not present, then compare the key with middle element to decide whether to go in left half or right half. Comparing with middle element is enough as
all the elements after mid+2 must be greater than element mid and all elements before mid-2 must be smaller than mid element.


Follow the steps below to implement the idea:

Initialize a variable mid with l+(r-l)/2.
If arr[mid] is equal to x return mid 
Else if arr[mid-1] is equal to x return mid-1 
Else if arr[mid+1] is equal to x return mid+1
If arr[mid] > x recur for search space l to mid-2 else recur for search space mid+2 to r.

*/
