class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        vector<vector<int>>mt(mat[0].size(),vector<int>(mat.size(),0));
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                mt[j][i] = mat[i][j];
            }
        }
        return mt;
    }
};