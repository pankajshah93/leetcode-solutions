class Solution {
public:
bool isvalid(int i,int j,int n,int m){
    return i >= 0 && i < n && j >= 0 && j < m;
}
void dfs(vector<vector<char>>& grid,int i, int j){
    grid[i][j] = '1';
    int n = grid.size();
    int m = grid[0].size();
    int row[4] = {0,0,1,-1};
    int col[4] = {1,-1,0,0};
    for(int k = 0; k < 4; k++){
        if(isvalid(i + row[k],j + col[k],n,m) && grid[i + row[k]][j + col[k]] == 'O'){
            dfs(grid,i+row[k],j + col[k]);
        }
    }
}
    void solve(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        //first row
        for(int i = 0; i < m; i++){
            if(grid[0][i] == 'O'){
                dfs(grid,0,i);
            }
        }
        //last row
        for(int i = 0; i < m; i++){
            if(grid[n-1][i] == 'O'){
                dfs(grid,n-1,i);
            }
        }
        //first col
        for(int i = 0; i < n; i++){
            if(grid[i][0] == 'O'){
                dfs(grid,i,0);
            }
        }
        //last col
        for(int i = 0; i < n; i++){
            if(grid[i][m-1] == 'O'){
                dfs(grid,i,m-1);
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    grid[i][j] = 'O';
                }else if(grid[i][j] == 'O'){
                    grid[i][j] = 'X';
                }
            }
        }
    }
};