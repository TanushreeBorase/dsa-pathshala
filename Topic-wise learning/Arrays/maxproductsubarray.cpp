// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
           int n = arr.size();
  
        int result = arr[0];
    
        for (int i = 0; i < n; i++) {
            int mul = 1;
          
            for (int j = i; j < n; j++) {
                mul *= arr[j];

                result = max(result, mul);
            }
        }
        return result;
    }
};
