class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        int n = pre.size();
        vector<int>adj[num];
        vector<int>inDegree(num,0);
        for(int i = 0; i < n; i++){
            int u = pre[i][0];
            int v = pre[i][1];
            adj[u].push_back(v);
            inDegree[v]++;
        }
        queue<int>q;
        for(int i = 0; i < num; i++){
            if(!inDegree[i]){
                q.push(i);
            }
        }
        int total = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            total++;
            for(auto neigh : adj[node]){
                inDegree[neigh]--;
                if(inDegree[neigh] == 0){
                    q.push(neigh);
                }
            }
        }
        return total == num;
    }
};