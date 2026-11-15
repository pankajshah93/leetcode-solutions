class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>dp(target+1,-1);
        dp[0] = 1;
        for(int i = 1; i <= target; i++){
            long  result = 0;
            for(int j = 0; j <n; j++ ){
                if(i-nums[j] >= 0)
                result+=dp[i-nums[j]];
            }
            dp[i] = result;
        }
        return dp[target];
    }
};