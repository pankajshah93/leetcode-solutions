class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>st(m,string(n,'#'));
        st[0] = string(n,'.');
        for(int i = 0; i < m; i++){
            st[i][n-1] = '.';
        }
        return st;
        return st;
    }
};