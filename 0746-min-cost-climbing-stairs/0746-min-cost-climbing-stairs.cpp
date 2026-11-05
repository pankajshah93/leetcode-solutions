class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(3);
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = dp[0] + dp[1];
        for(int i = 2; i <= n; i++){
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = min(dp[0]+ cost[i-2],dp[1] + cost[i-1]);
        }
        return dp[2];
    }
};