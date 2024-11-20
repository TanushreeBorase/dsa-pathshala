class Solution {
public:
    int search(vector<int>& nums, int x) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == x)
                return mid;

            // Check if the left half is sorted
            if (nums[low] <= nums[mid]) {
                // Check if x lies in the sorted left half
                if (x >= nums[low] && x < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // Otherwise, the right half must be sorted
            else {
                // Check if x lies in the sorted right half
                if (x > nums[mid] && x <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};

/*
 Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k. 
Now the array is rotated at some pivot point unknown to you. Find the index at which k is present and if k is not present return -1.

  Algorithm:
The steps are as follows:

Place the 2 pointers i.e. low and high: Initially, we will place the pointers like this: low will point to the first index, and high will point to the last index.
Calculate the ‘mid’: Now, inside a loop, we will calculate the value of ‘mid’ using the following formula:
mid = (low+high) // 2 ( ‘//’ refers to integer division)
Check if arr[mid] == target: If it is, return the index mid.
Identify the sorted half, check where the target is located, and then eliminate one half accordingly:
If arr[low] <= arr[mid]: This condition ensures that the left part is sorted.
If arr[low] <= target && target <= arr[mid]: It signifies that the target is in this sorted half. So, we will eliminate the right half (high = mid-1).
Otherwise, the target does not exist in the sorted half. So, we will eliminate this left half by doing low = mid+1.
Otherwise, if the right half is sorted:
If arr[mid] <= target && target <= arr[high]: It signifies that the target is in this sorted right half. So, we will eliminate the left half (low = mid+1).
Otherwise, the target does not exist in this sorted half. So, we will eliminate this right half by doing high = mid-1.
Once, the ‘mid’ points to the target, the index will be returned.
This process will be inside a loop and the loop will continue until low crosses high. If no index is found, we will return -1.
*/
