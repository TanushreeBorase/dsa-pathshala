#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int start, int end, int x) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if the middle element is the target
        if (arr[mid] == x)
            return mid;

        // Check if the array is in ascending order
        if (arr[start] < arr[end]) {
            // Adjust search range for ascending order
            if (arr[mid] < x)
                start = mid + 1;
            else
                end = mid - 1;
        } 
        // Else, the array is in descending order
        else {
            // Adjust search range for descending order
            if (arr[mid] > x)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    // Element not found
    return -1;
}

// Driver Code
int main() {
    int arr[] = {2,5,7,8,9,10}; // Example array
    int x = 10; // Element to search
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

/*
Given an array, arr[ ] of size N and an element X and the array is sorted in any order(ascending or descending), 
the task is to find whether the element x is present in the array or not. If yes, then print its index, else print -1.
*/

