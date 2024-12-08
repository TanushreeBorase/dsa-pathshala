class Solution {
public:
    vector<int> getRow(int rowindex) {
       long long element = 1;
       vector<int>ans;
       ans.push_back(1);
       for(int col = 0;col<rowindex;col++){
        element = element * (rowindex - col);
        element = element / (col + 1);
        ans.push_back(element);
       }
       return ans;
    }
};
