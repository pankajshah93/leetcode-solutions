class Solution {
public:
bool isvalid(int i,int j,int n,int m){
    return i >= 0 && i < n && j >= 0 && j < m;
}
void dfs(vector<vector<int>>& image,int  i, int j,int color,int val){
    image[i][j] = color;
    int n = image.size();
    int m = image[0].size();
    int row[4] = {0,0,1,-1};
    int col[4] = {1,-1,0,0};
    for(int k = 0;k < 4; k++){
        if(isvalid(i + row[k], j+ col[k],n,m) && image[i + row[k]][j + col[k]] == val){
            dfs(image,i+row[k],j+col[k],color,val);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color){
            return image;
        }
         dfs(image,sr,sc,color,image[sr][sc]);
         return image;
        }
};