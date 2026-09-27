class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                int open = st.top();
                st.pop();

                reverse(s.begin() + open + 1, s.begin() + i);
            }
        }

        string ans;

        for (char c : s) {
            if (c != '(' && c != ')') {
                ans += c;
            }
        }

        return ans;
    }
};