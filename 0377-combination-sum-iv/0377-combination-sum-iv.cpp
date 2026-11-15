class Solution {
public:
int findsum(int n,vector<int>&nums,int target,vector<int>&dp){
    if(target == 0){
        return 1;
    }
    if(target <0){
        return 0;
    }
    if(dp[target] != -1){
        return dp[target];
    }
    int result = 0;
    for(int i = 0; i < n; i++){
        result+= findsum(n,nums,target-nums[i],dp);
    }
    return dp[target] = result;
}
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>dp(target+1,-1);
        return findsum(n,nums,target,dp);
    }
};