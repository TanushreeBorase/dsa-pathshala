void leftRotate(vector<int>& arr, int d) {  
    int n = arr.size();  
    if (n == 0) return;  

    d = d % n;  

    reverse(arr.begin(), arr.begin() + d);  
    reverse(arr.begin() + d, arr.end());  
    reverse(arr.begin(), arr.end());  
}  
