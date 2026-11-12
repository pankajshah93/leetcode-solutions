class Solution {
public:
// bool subset(vector<int>&nums,int index,int target,vector<vector<int>>&dp){
//     if(target == 0){
//         return 1;
//     }
//     if(index == 0 || target < 0){
//         return 0;
//     }
//     if(dp[index][target] != -1){
//         return dp[index][target];
//     }
//     return dp[index][target] =  subset(nums,index-1,target,dp) + subset(nums,index-1,target - nums[index-1],dp);
// }
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
        vector<vector<int>>dp(n+1,vector<int>(target+1,0));
        dp[0][0] = 1;
        if(nums[0] <= target)
        dp[0][nums[0]] = 1;
        for(int i = 1 ; i < n; i++){
            for(int j = 1; j <= target; j++){
                if(j-nums[i] >= 0){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n-1][target];
    }
};