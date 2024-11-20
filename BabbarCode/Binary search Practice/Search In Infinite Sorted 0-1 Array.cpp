int firstOne() {
    int low = 0, high = 1;
    while (true) {
        int highValue = get(high); 
        if (highValue == 1) break;
        low = high;
        high *= 2;
    }

    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 

        int midValue = get(mid); 
        if (midValue == 1) {
            result = mid;   
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }

    return result; 
}
/*
Problem statement
You are given an infinite array consisting of only ones and zeroes, in sorted order. You have to find the index of the first occurrence of 1.

Example:
If the array is 0 0 0 0 1 1 1 1… then, the first occurrence of 1 will be at index 4 therefore the answer here is 4.
Note:
As the array size is infinite, the actual array won’t be given to you. Instead, you will be able to access the array elements by calling a method named ‘get’.

get(i) : returns the value present at index I.

Indexing is 0-based. 

Instead of representing an infinite array in the input, we give the index of the first occurrence of 1 in the input itself. However, this input will be completely hidden from the user.

It is guaranteed that the answer will fit in a 64-bit integer.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= ARR[i] <= 1

Time limit: 1sec
Sample Input 1:
10
Sample Output 1:
10

*/
