class Solution {
public:
int maxAmountRob(vector<int>&nums,int n,vector<int>&dp){
    if(n == 0){
        return nums[0];
    }
    if(n == 1){
        return max(nums[0],nums[1]);
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = max(nums[n]+maxAmountRob(nums,n-2,dp),maxAmountRob(nums,n-1,dp));
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return maxAmountRob(nums,n-1,dp);
    }
};