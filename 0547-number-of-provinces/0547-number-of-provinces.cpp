class Solution {
public:
void dfs( vector<int>adj[],int node,vector<int>&visited){
    visited[node] = 1;
    for(auto neigh : adj[node]){
        if(!visited[neigh]){
            dfs(adj,neigh,visited);
        }
    }
}
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
                dfs(adj,i,visited);
            }
        }
        return count;
    }
};