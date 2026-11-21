class Solution {
public:
int maxprofit(int index,int buy,int transaction,vector<int>&price, vector<vector<vector<int>>>&dp){
    if(index == price.size() || transaction == 0){
        return 0;
    }
    if(dp[index][buy][transaction] != -1){
        return dp[index][buy][transaction];
    }
    if(buy){
        return dp[index][buy][transaction] =  max(-price[index]+maxprofit(index+1,0,transaction,price,dp),
        maxprofit(index+1,1,transaction,price,dp));
    }else{
        return dp[index][buy][transaction] = max(price[index]+maxprofit(index+1,1,transaction-1,price,dp),
        maxprofit(index+1,0,transaction,price,dp));
    }
}
    int maxProfit(int transaction, vector<int>& prices) {
         int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(transaction+1,-1)));
        return maxprofit(0,1,transaction,prices,dp);
    }
};