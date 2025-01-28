class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')') {
                st.pop(); // Close a pair
                if (!st.empty()) {
                    ans += s[i]; // Not an outer closing parenthesis
                }
            } else { // s[i] == '('
                if (!st.empty()) {
                    ans += s[i]; // Not an outer opening parenthesis
                }
                st.push(s[i]); // Open a pair
            }
        }
        return ans;
    }
};
