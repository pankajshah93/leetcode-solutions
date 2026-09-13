class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        vector<int>inDegree(n,0);
        for(auto edge : pre){
            adj[edge[1]].push_back(edge[0]);
            inDegree[edge[0]]++;
        }
        queue<int>q;
        for(int i = 0; i < n; i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }
        vector<int>result;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            result.push_back(node);
            for(auto neigh : adj[node]){
                inDegree[neigh]--;
                if(inDegree[neigh] == 0){
                    q.push(neigh);
                }
            }
        }
        if(result.size() == n){
            return result;
        }
        return {};
    }
};