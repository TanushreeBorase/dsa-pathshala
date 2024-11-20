class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0,high = letters.size()-1;
        char ans = letters[0];
        while(low <= high){
            int mid = low + (high - low)/2;
            if(letters[mid] <= target){
                low = mid + 1;
            }
            else{
                ans = letters[mid];
                high = mid - 1;
            }
        }
        return ans;
    }
};

/*
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.


In this code, char ans is initialized to letters[0] because the problem guarantees that the input array letters is sorted in non-decreasing order
and wraps around. This means that if no letter greater than target is found during the binary search, the smallest letter in the array 
(i.e., letters[0]) will be the answer.

*/
