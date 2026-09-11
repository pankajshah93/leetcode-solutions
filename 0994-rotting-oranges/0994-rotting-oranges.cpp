class Solution {
public:
bool isvalid(int i,int j,int r,int c){
    return i >= 0 && i < r && j >= 0 && j < c;
}
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int R = grid.size();
        int C = grid[0].size();
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                } 
            }
        }
        int timer = 0;
        while(!q.empty()){
            int  currentOrange = q.size();
            timer++;
            while(currentOrange--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                int row[4] = {0,0,-1,1};
                int col[4] = {1,-1,0,0};
                for(int k = 0; k< 4; k++){
                    if(isvalid(i + row[k],j + col[k],R,C) &&
                    grid[i + row[k]][j + col[k]] == 1){
                        grid[i + row[k]][j + col[k]] = 2;
                        q.push({i + row[k],j + col[k]});
                    }
                }
            }
        }
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return timer == 0?timer : timer- 1;
    }
};