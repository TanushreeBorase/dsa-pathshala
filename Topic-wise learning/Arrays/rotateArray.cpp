class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
  void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0) 
            return;
            
        // Get the effective number of rotations:
        d = d % n;
    
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
    
};
