class Solution {
public:
void findBridge(vector<int>adj[],int node,int parent,vector<int>&disc,vector<int>&low,vector<bool>&visited,int &timer, vector<vector<int>>&bridge){
    disc[node] = low[node] = timer;
    visited[node]  = 1;
    timer++;
    for(auto neib : adj[node]){
        if(neib == parent){
            continue;
        }
        else if(visited[neib]){
            low[node] = min(low[node],low[neib]);
        }else{
            findBridge(adj,neib,node,disc,low,visited,timer,bridge);
            if(disc[node] < low[neib]){
                bridge.push_back({node,neib});
            }
            low[node] = min(low[node],low[neib]);
        }
    }
}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>Disc(n);
        vector<int>Low(n);
        vector<bool>visited(n,0);
        vector<vector<int>>bridge;
        vector<int>adj[n];
        for(auto edge : connections){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int timer = 0;
        findBridge(adj,0,-1,Disc,Low,visited,timer,bridge);
        return bridge;
    }
};