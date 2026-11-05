class Solution {
public:
int climb(int n,vector<int>&cost,vector<int>&dp){
    if(n <= 1){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] =  min(climb(n-1,cost,dp)+ cost[n-1],climb(n-2,cost,dp) + cost[n-2]);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        return climb(n,cost,dp);
    }
};