class Solution {
public:
bool dfs(vector<vector<int>>&graph,int node,vector<int>&visit,vector<int>&pathvisit,vector<int>&check){
    visit[node] = 1;
    pathvisit[node] = 1;
    check[node] = 0;
    for(auto it : graph[node]){
        if(!visit[it]){
            if(dfs(graph,it,visit,pathvisit,check) == true){
                check[it] = 0;
                return true;
            }
        }else if(pathvisit[it]){
                check[it] = 0;
                return true;
            }
    }
    check[node] = 1;
    pathvisit[node] = 0;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        int m = graph[0].size();
        vector<int>visit(n,0);
        vector<int>pathvisit(n,0);
        vector<int>check(n,0);
        for(int i = 0; i < n; i++){
            if(!visit[i]){
                dfs(graph,i,visit,pathvisit,check);
            }
        }
        vector<int>res;
        for(int i = 0;i < n; i++){
            if(check[i] == 1){
                res.push_back(i);
            }
        }
        return res;
    }
};