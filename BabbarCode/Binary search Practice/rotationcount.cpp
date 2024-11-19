#include <iostream>
#include <vector>
using namespace std;

// Find index of minimum element via Binary Search
int RotationCount(vector<int>& arr, int low, int high) {
    // If array is not rotated => RotationCount = 0
    if (arr[low] < arr[high]) return 0;

    while (low <= high) {
        // Finding mid to avoid overflow
        int mid = low + (high - low) / 2;

        // Handling corner cases
        int next = (mid + 1) % arr.size();
        int prev = (mid + arr.size() - 1) % arr.size();

        // Comparing both the neighbors
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;

        // Minimum element would lie in the left part
        else if (arr[mid] <= arr[high])
            high = mid - 1;

        // Minimum element would lie in the right part
        else if (arr[low] <= arr[mid])
            low = mid + 1;
    }

    return -1; // Any dummy value
}

// Main Function
int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rotations = RotationCount(arr, 0, arr.size() - 1);
    cout << "Number of rotations: " << rotations << endl;

    return 0;
}
/*
We are given an array of distinct integers, sorted in increasing order. The array has been rotated (clockwise) k times; find k or the ‘Rotation Count’.
Solution: 

Binary Search
Since we know that the minimum element is the smallest element of the array, it would be smaller than both of its neighbors(left and right) in the array.
We would use this property to find the index of the minimum element via Binary Search.

We know that the middle element of the array divides the array into two halves and it is worth mentioning that since the given array is a sorted rotated array,
at least one of these halves will be sorted. We can use this property to determine the position of the minimum element of the array by deciding whether to discard 
the left or right half of the array on every iteration of binary search.

Algorithm
Initialize lo and hi pointers denoting our current search space as lo = 0 and hi = n - 1, where n denotes the number of elements of the array.
Run a while loop while lo <= hi(a valid search space)
If the left element of the current search space of array is less than or equal to the right element then the search space(subarray) being considered
is sorted and we can directly return the left element as the minimum element.
Check if the middle element given by mid = lo + (hi - lo)/2 is the minimum element i.e arr[mid] is smaller than its left and right 
neighbours(arr[mid - 1] and arr[mid + 1]).
If the above step fails, then we need to reduce our search space for finding the position of the minimum element.
If the right half of the search space is sorted then we can discard the right half and move hi to mid - 1 as the middle element 
is not the minimum element and arr[mid...hi] is sorted.
Else the left half of the search space is sorted and we can discard the left half and move lo to mid + 1 as the middle element is 
not the minimum element and arr[lo...mid] is sorted with the left element being greater than the right element of the search space.
 

Note: If the middle element becomes the boundary element of the array, we take the right neighbour as the first element of the array if
the middle element is the last element of the array and similarly the left neighbour is the last element of the array if the middle element is the first element 
of the array.

*/
