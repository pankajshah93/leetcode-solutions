class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {

        vector<int> cost(n+1, 0);

        for(int i = 1; i <= n; i++) {
            cost[i] = costs[i-1];
        }
        vector<int>dp(4,-1);
        dp[0] = 0;
        if(n==1){
            return cost[1] + 1;
        }
        dp[1] = cost[1] + 1;
        if(n == 2){
            return min(cost[2]+4,dp[1]+cost[2]+1);
        }
        dp[2] = min(cost[2]+4,dp[1]+cost[2]+1);
        dp[3] = min({
            dp[0] + cost[3] + 9,
            dp[1] + cost[3] + 4,
            dp[2] + cost[3] + 1
        });
        for(int i = 4; i <= n; i++){
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = dp[3];
            dp[3] = min({
                dp[0] + cost[i] + 9,
                dp[1] + cost[i] + 4,
                dp[2] + cost[i] + 1
            });
        }
        return dp[3];
    }
};