class Solution {
public:
bool isvalid(int i,int j,int n,int m){
    return i >= 0 && i < n && j >= 0 && j < m;
}
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        queue<pair<int,int>>qu;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    qu.push({i,j});
                }
            }   
        }        
            while(!qu.empty()){
                int size = qu.size();
                    count++;
                while(size > 0){
                    int row = qu.front().first;
                    int col = qu.front().second;
                    qu.pop();
                    int r[4] = {0,0,1,-1};
                    int c[4] = {1,-1,0,0};
                    for(int k = 0; k < 4; k++){
                        if(isvalid(row + r[k],col + c[k],n,m) && grid[row + r[k]][col + c[k]] == 1){
                            grid[row + r[k]][col + c[k]] = 2;
                            qu.push({row + r[k],col + c[k]});
                        }
                    }
                    size--;
                }    
                
            }
         for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
         }  
        return count == 0?count : count - 1;
    }
};