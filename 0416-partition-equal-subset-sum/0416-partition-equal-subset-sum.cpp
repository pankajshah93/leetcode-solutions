class Solution {
public:
bool subset(vector<int>&nums,int index,int target,vector<vector<int>>&dp){
    if(target == 0){
        return 1;
    }
    if(index == 0 || target < 0){
        return 0;
    }
    if(dp[index][target] != -1){
        return dp[index][target];
    }
    return dp[index][target] =  subset(nums,index-1,target,dp) || subset(nums,index-1,target - nums[index-1],dp);
}
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum+= nums[i];
        }
        int target = 0;
        if(sum%2 == 0){
            target = sum/2;
        }else{
            return 0;
        };
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return subset(nums,n,target,dp);
    }
};