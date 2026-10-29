class Solution {
public:
bool isvalid(int i, int j,int n,int m){
    return i >= 0 && i < n && j >= 0 && j < m; 
}
void bfs(int i,int j,vector<vector<bool>>& mat,vector<vector<char>>& grid){
    mat[i][j] = 1;
    queue<pair<int,int>>q;
    q.push({i,j});
    int n = grid.size();
    int m = grid[0].size();
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        int r[4] = {0,0,1,-1};
        int c[4] = {1,-1,0,0};
        for(int k = 0; k < 4; k++){
            if(isvalid(row + r[k],col + c[k],n,m) && grid[row+r[k]][col + c[k]] == '1' && !mat[row + r[k]][col + c[k]]){
                mat[row + r[k]][col + c[k]] = 1;
                q.push({row + r[k],col + c[k]});
            }
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>mat(n,vector<bool>(m,0));
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m;j++){
                if(!mat[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(i,j,mat,grid);
                }
            }
        }
        return count;
    }
};