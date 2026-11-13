class Solution {
public:
int coinse(int n,vector<int>&coins,int amount,vector<vector<int>>&dp){
    if(amount == 0){
        return 0;
    }
    if(n==0 || amount < 0){
        return 1e9;
    }
    if(dp[n][amount] != -1){
        return dp[n][amount];
    }
    return dp[n][amount] =  min(coinse(n-1,coins,amount,dp),1+coinse(n,coins,amount-coins[n-1],dp));
}
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int answer = coinse(n,coins,amount,dp);
        return answer>=1e9?-1 : answer;
    }
};