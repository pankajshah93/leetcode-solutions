class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int  n = isConnected.size();
        vector<int>adj[n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count = 0;
        vector<int>visited(n,0);
        for(int i = 0; i < n; i++){
            if(visited[i] == 0){
                count++;
                queue<int>qu;
                qu.push(i);
                visited[i] = 0;
                while(!qu.empty()){
                    int node = qu.front();
                    qu.pop();
                    for(int i = 0; i < adj[node].size();i++){
                        int neigh = adj[node][i];
                        if(visited[neigh] == 0){
                            visited[neigh] = 1;
                            qu.push(neigh);
                        }
                    }
                }
            }
        }
        return count;
    }
};