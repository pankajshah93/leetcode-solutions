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
        int target = 0;
        for(int i = 0; i < n; i++){
            target+= nums[i];
        }
        if(target%2){
            return 0;
        }
        target /=2;
        vector<int>prev(target+1,0);
        prev[0] = 1;
        if(nums[0] <= target)
        prev[nums[0]] = 1;
        for(int i = 1 ; i < n; i++){
            for(int j = target; j >= 0; j--){
                if(j-nums[i] >= 0){
                    prev[j] = prev[j] || prev[j-nums[i]];
                }else{
                    prev[j] = prev[j];
                }
            }
        }
        return prev[target];
    }
};