void reverseArray(vector<int> &arr , int m) {
    // Write your code here
    int start = 0, end = arr.size()-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;  
    }
    
     

}
