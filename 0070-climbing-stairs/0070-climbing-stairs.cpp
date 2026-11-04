class Solution {
public:
    int climbStairs(int n){
        if(n <= 2){
            return n;
        }
        vector<int>dp(3);
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = dp[0] + dp[1];
        for(int i = 3; i < n; i++){
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = dp[0] + dp[1];
        }
        return dp[2];
    } 
};