class Solution {
public:
bool isvalid(int i,int j,int r,int c){
    return i >= 0 && i < r && j >= 0 && j < c;
}
void dfs(vector<vector<char>>& grid,int i,int j){
    grid[i][j] = '0';
    int r = grid.size();
    int c = grid[0].size();
    int row[4] = {0,0,1,-1};
    int col[4] = {1,-1,0,0};
    for(int k = 0; k < 4; k++){
        if(isvalid(i+row[k],j+col[k],r,c) && grid[i+row[k]][j+col[k]] == '1'){
            dfs(grid,i+row[k],j+col[k]);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int count = 0;
        for(int i = 0; i < r; i++){
            for(int  j= 0; j < c; j++){
                if(grid[i][j] == '1'){
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};